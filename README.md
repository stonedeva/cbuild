# CBuild
A cross platform build library written in C

## Why?
It has ZERO bloat an just calles the C-Compiler
with all the given files and flags

## Who?
Anybody who wants a simple build system for their 
C project without a lot of third-party dependencies

## How?
Here is an example for an imaginary project
```c
#define CB_IMPLEMENTATION
#include "./cbuild.h"

int main(void)
{
    Builder* builder = cb_init("output");
    cb_set_cflags("-I include -Wall");

    cb_add_target("src/main.c");
    cb_add_target("src/helper.c");

    cb_build(builder);
    return 0;
}

```

Compile and run:
```code
cc -o cbuild cbuild.c
./cbuild
```
