package org.josakko.filediff;

import java.nio.file.Path;
import org.josakko.filediff.data.Directory;

public class DirectoryThread extends Thread {
    public Path path;
    public Directory directory;

    public DirectoryThread(Path path) {
        this.path = path;
    }

    @Override
    public void run() {
        this.directory = new Directory(path);
    }
}
