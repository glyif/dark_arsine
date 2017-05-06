<img src="https://www.holbertonschool.com/assets/holberton-logo-1cc451260ca3cd297def53f2250a9794810667c7ca7b5fa5879a569a457bf16f.png" alt="Holberton logo">

# dark_arsine
## Author: Bobby Yang (Batch 2)

## Build Status

## Synopsis
Dark Arsine is a reverse shell program.

## File Breakdown
### base_struct.h
This file contains a structure that contains all of the necessary information to start a reverse shell.
```c
typedef struct dark_arsine
{
	char *host
    char *service;
    char *shell;
    uint16_t port;
    int family;
} arsine_t;
```

### header.h
This file contains all of the macros defined and the prototypes of the functions.

### struct_init.c

### reverse.c

### main.c



## Using

## TODO
- [ ] Get [@Julien Barbier](https://github.com/jbarbier) to say I did a good job ;)


