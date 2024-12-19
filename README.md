# Learning-c

## Udemy Course: C Programming for Beginners - Master the C Language

- [The Course](https://www.udemy.com/course/c-programming-for-beginners-/)


### Section 01: Introduction

- C is a high-level language, when compiled, it becomes low-level assembly language.
- You have to manage memory yourself, you have to allocate and free memory.
- C is an imperative language, you tell the computer what to do. It's not a declarative or functional language. This means that you have to tell the computer how to do something, not what to do.
- C is a statically typed language, which means that the type of a variable is known at compile time.
- C evolved from the B language. 
- C is hardware independent, which means that you can compile C code for different types of computers and operating systems.
- There's a lot of different versions of C, but the most popular one is the C89 standard. 89 stands for 1989, which is the year the standard was released.
- C is efficient, portable, flexible, and programmer oriented.
- Creating a C program: editing, compiling, linking, and executing.
- I'll write `.c` files which when compiled become `.obj` files, which when linked become `.exe` files.
- The `.exe` file is the executable file, which is the file that you can run on your computer.
- The `.obj` file is the object file, which is the file that contains the compiled code.
- The `.c` file is the source file, which is the file that you write your code in.

### Section 02: Installing Required Software
- You can use `gcc -o myFirstProgram myFirstProgram.c` to compile the code.
- You can use `hexdump -C a.out` to see the compiled code.
- You can use `objdump -d a.out` to see the assembly code.
- You can use `nm a.out` to see the symbols in the code.
- You can use `file a.out` to see the file type.
- You can use `readelf -a a.out` to see the elf file.
- You can use `ldd a.out` to see the dynamic dependencies.
- You can use `ldd a.out` to see the dynamic dependencies.

### Section 03: Starting To Write Code
- `#include <stdio.h>` is a preprocessor directive, which tells the compiler to include the standard input/output library.
- Don't ignore compiler warnings, because they can help you find bugs in your code. Treat them as errors.
- I've added some aliases:
  - alias cc='gcc *.c -o program.out' # This is useful to compile the code.
  - alias rmout='find . -type f -name "*.out" -delete' # This is useful to clean up the output files.
- I've added a `.vscode/launch.json` file to the root of the project, which is useful to run the code in VSCode.

### Section 04: Basic Concepts
- Comments: `/* This is a comment */` or `// This is a comment`
- Variables: `int myFavoriteNumber = 0;`
- Constants: `const int myFavoriteNumber = 0;`
- Data Types: `int`, `float`, `double`, `char`, `void`
- Operators: `+`, `-`, `*`, `/`, `%`
- Expressions: `a + b`
- Statements: `if`, `for`, `while`, `do-while`
- Functions: `int main() { return 0; }`
- Preprocessor Directives: `#include <stdio.h>`, `#define PI 3.14` Anything that starts with a `#` is a preprocessor directive.
- `#include <stdio.h>` is a preprocessor directive, which tells the compiler to include the standard input/output library.
- A header file is a file that contains declarations of functions and variables that can be used in your code.
  - Using `< >` is a way to include a header file.
  - Using `""` is a way to include a local file.
  - You can use `#ifndef` to prevent the same header file from being included multiple times.