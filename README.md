# Cflags
It's just learning project, but it maybe will be helpful for somebody. It's just flags (lib) like yourbinfile --help and etc. At this moment realized:
  - Bool flags
  - Int flags
  - Float flags
  - String flags
  - And List structure.....

# Installation
Firstly you have to clone the reposytory. Next move is to compile library with make. If you want to use the library without -L and -l flags, copy libcflags.a to the /usr/lib directory and flags.h to the /usr/include directory.
```sh
git clone https://github.com/salvoronis/cflags.git
cd cflags
make mkstatlib
```
And now you have libcflags.a and flags.h in the directory.

# Example

There are example application, make it by and run it with flag "anime":
```sh
make
bin/test --anime=someText
```
It should print someText.
Example source code you can find in example directory.
# Usage
It's simple:
```c
initFlag(argc, argv);
int a;
flag_int(&a,"your_flag");
```
The same usage with other basic structures, was int a, now char* a, was flag_int(&a,"your_flag"), now flag_string(&a, "your_flagg")
If you want to make a standart value:
```c
initFlag(argc, argv);
int a = 123;
flag_int(&a,"your_flag");
```
And "a" won't change

---
# License

General Public License
![GPL](https://ru.wikipedia.org/wiki/GNU_Lesser_General_Public_License#/media/%D0%A4%D0%B0%D0%B9%D0%BB:LGPLv3_Logo.svg "wikipedia")


**btw I use arch linux**
