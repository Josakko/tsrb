package org.josakko.filediff;

import java.nio.file.DirectoryStream;
import java.nio.file.Files;
import java.io.IOException;
import java.nio.file.Path;
import java.util.ArrayList;
import java.util.Arrays;

import org.josakko.filediff.data.Directory;
import org.josakko.filediff.data.FileData;

public class Utils {
    public static final String GREEN = "\u001B[32m";
    public static final String RED = "\u001B[31m";
    public static final String RED_BG = "\u001B[41m";
    public static final String GREEN_BG = "\u001B[42m";
    public static final String YELLOW = "\u001B[33m";
    public static final String YELLOW_BG = "\u001B[43m";
    public static final String RESET = "\u001B[0m";
    public static final String BOLD = "\u001B[1m";

    public static ArrayList<FileData> walkAndCompare(Directory base, FileData that) {
        ArrayList<FileData> equalFiles = new ArrayList<FileData>(1);
        
        for (FileData file : base.childrenFiles) {
            if (Arrays.equals(file.hash, that.hash)) {
                equalFiles.add(file);
            }
        }

        for (Directory subDir : base.childrenDirs) {
            equalFiles.addAll(walkAndCompare(subDir, that));
        }

        return equalFiles;
    }

    public static ArrayList<FileData> getChildrenFiles(Path parent) {
        ArrayList<FileData> files = new ArrayList<FileData>(16);

        try (DirectoryStream<Path> stream = Files.newDirectoryStream(parent)) {
            for (Path file : stream) {
                if (!Files.isDirectory(file) && Files.exists(file))
                    files.add(new FileData(file));
            }
        } catch (IOException e) {
            return null;
        }

        /*
        File parDir = parent.toFile();
        File[] rawArrFiles = parDir.listFiles();
        for (File file : rawArrFiles) {
            if (file.isFile()) {
                files.add(new FileData(file.toPath()));
            }
        }
        */

        return files;
    }

    public static ArrayList<Directory> getChildrenDirectories(Path parent) {
        ArrayList<Directory> dirs = new ArrayList<Directory>(16);

        try (DirectoryStream<Path> stream = Files.newDirectoryStream(parent)) {
            for (Path dir : stream) {
                if (Files.isDirectory(dir))
                    dirs.add(new Directory(dir));
            }
        } catch (IOException e) {
            return null;
        }

        /*
        File parDir = parent.toFile();
        File[] rawArrDirs = parDir.listFiles();
        for (File dir : rawArrDirs) {
            if (dir.isDirectory()) {
                dirs.add(new Directory(dir.toPath()));
            }
        }
        */

        return dirs;
    }

}
