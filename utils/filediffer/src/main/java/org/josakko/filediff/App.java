package org.josakko.filediff;

import org.josakko.filediff.data.FileData;
import org.josakko.filediff.data.Directory;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;

public class App {
    public static Directory targetDir;
    public static Directory toCheckDir;
    public static boolean copyUnique = false;
    public static Path dirForCopy;

    public static void compareFile(FileData file) {
        ArrayList<FileData> equalFiles = Utils.walkAndCompare(targetDir, file);
        if (equalFiles.size() == 0) {
            if (copyUnique) {
                try {
                    Files.copy(file.path, dirForCopy.resolve(file.path.getFileName()));
                } catch (IOException e) {
                    System.out.println(Utils.YELLOW + "[!] Failed to copy file: " + file.path.toString() + " because: " + e.getMessage() + Utils.RESET);
                }
            }

            System.out.println(Utils.GREEN + "[+] File " + file.path.toString() + " is unique" + Utils.RESET);
            // System.out.println(Utils.GREEN + "[+] File " + Utils.RESET + Utils.GREEN_BG + file.path.toString() + Utils.RESET + Utils.GREEN + " isunique" + Utils.RESET);
            return;
        }

        for (FileData equalFile : equalFiles) {
            System.out.println(Utils.RED + "[-] file " + file.path.toString() + " is equal to a file in the target directory " + equalFile.path.toString() + Utils.RESET);
            // System.out.println(Utils.RED + "[-] file " + Utils.RESET + Utils.RED_BG + file.path.toString() + Utils.RESET + Utils.RED + " is equal to afile in the target directory " + Utils.RESET + Utils.RED_BG + equalFile.path.toString() + Utils.RESET);
        }
    }

    public static void compareDir(Directory toCheck) {
        for (FileData file : toCheck.childrenFiles) {
            compareFile(file);
        }

        for (Directory subDir : toCheck.childrenDirs) {
            compareDir(subDir);
        }
    }

    public static void main(String[] args) {
        if (args.length < 2) {
            System.out.println(Utils.YELLOW + "[!] Missing arguments" + Utils.RESET);
            return;
        }

        Path targetPath = Path.of(args[0]);
        Path toCheckPath = Path.of(args[1]);
        if (!Files.isDirectory(targetPath) || !Files.exists(toCheckPath)) {
            System.out.println(Utils.YELLOW + "[!] Supplied targed path or to check path is not a valid directory path!" + Utils.RESET);
            return;
        }

        if (!Files.isDirectory(toCheckPath)) {
            targetDir = new Directory(targetPath);
            FileData toCheckFile = new FileData(toCheckPath);
            compareFile(toCheckFile);
            return;
        }

        if (args.length >= 3 && (args[2].equals("-cp") || args[2].equals("--copy"))) {
            copyUnique = true; 
            dirForCopy = toCheckPath;
            
            while (Files.exists(dirForCopy)) {
                dirForCopy = dirForCopy.getParent().resolve(dirForCopy.getFileName() + "-unique");
            }

            try {
                Files.createDirectory(dirForCopy);
            } catch (IOException e) {
                System.out.println(Utils.YELLOW + "[!] Failed to make new directory for copying unique files, will skip it: " + e.getMessage() + Utils.RESET);
                copyUnique = false;
            }

            System.out.println("[i] Will copy unique files to: " + dirForCopy.toString());
        }

        System.out.print("[i] Starting hashing target and to check directories...");
        DirectoryThread targetDirThread = new DirectoryThread(targetPath);
        DirectoryThread toCheckDirThread = new DirectoryThread(toCheckPath);

        targetDirThread.start();
        toCheckDirThread.start();

        try {
            targetDirThread.join();
            toCheckDirThread.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        targetDir = targetDirThread.directory;
        toCheckDir = toCheckDirThread.directory;

        System.out.println(" Done.");

        compareDir(toCheckDir);
    }
}
