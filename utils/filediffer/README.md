# JK_filediff

Program that checks if the supplied filenames are contained within a specified directory

## Usage

```sh
$ java -jar filediff.jar TARGET_DIR TO_CHECK [ -cp ]
```

- `TARGET_DIR` is the path to the directory that is to be checked against
- `TO_CHECK` is a directory or a file whose presence is to be checked in the `TARGET_DIR`
- `-cp` or `--copy` copy unique files to a separate directory
