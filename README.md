# Cflags
It's just learning project, but it maybe will be helpful for somebody. It's just flags (lib) like yourbinfile --help and etc. At this moment realized:
  - Bool flags
  - Int flags
  - Float flags
  - String flags
  - And List structure.....

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

None


**btw I use arch linux**
 
