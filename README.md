# s21_stringplus

An educational group project from School 21: a full reimplementation of standard C library of string functions `string.h`.

The project includes custom versions of functions like `strlen`, `strchr`, `memcpy`, as well as extended utilities like `to_upper`, `trim`, `sprintf`, and `sscanf`.

All modules are tested using the `check` unit testing framework and code coverage tools.

 
```bash
make # build the library

make tests # run unit tests

make gcov_report # generate coverage report

make clean # clean build artefacts

make rebuild # rebuild entire project
```
