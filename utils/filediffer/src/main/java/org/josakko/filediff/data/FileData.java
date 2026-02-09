package org.josakko.filediff.data;

import java.io.IOException;
import java.io.InputStream;
import java.nio.file.Files;
import java.nio.file.Path;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

public class FileData {
    public final Path path;
    public final byte[] hash;

    public FileData(Path path) {
        this.path = path;
        this.hash = hashFile(path);
    }

    private static byte[] hashFile(Path path) {
        MessageDigest digest;

        try {
            digest = MessageDigest.getInstance("SHA-256");
        } catch (NoSuchAlgorithmException e) {
            return null;
        }

        try (InputStream is = Files.newInputStream(path)) {
            byte[] buffer = new byte[8192];
            int read;

            while ((read = is.read(buffer)) != -1) {
                digest.update(buffer, 0, read);
            }
        } catch (IOException e) {
            return null;
        }
        
        byte[] hash = digest.digest(); // 32bytes (for sha256)
        return hash;
    }

}
