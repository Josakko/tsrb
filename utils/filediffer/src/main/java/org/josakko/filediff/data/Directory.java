package org.josakko.filediff.data;

import java.nio.file.Path;
import java.util.ArrayList;
import org.josakko.filediff.Utils;

public class Directory {
    public final Path path;
    public ArrayList<FileData> childrenFiles = new ArrayList<FileData>(16); // ig should be fine
    public ArrayList<Directory> childrenDirs = new ArrayList<Directory>(16); // (for now)

    public Directory(Path path) {
        this.path = path;
        this.populate();
    }

    public void populate() {
        this.childrenFiles = Utils.getChildrenFiles(this.path);
        this.childrenDirs = Utils.getChildrenDirectories(this.path);
    }
}
