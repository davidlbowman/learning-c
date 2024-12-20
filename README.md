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

### Section 05: Variables and Data Types
- RAM is the random access memory, which is the memory that the computer uses to store data.
- Some variables names cannot be used, for example:
  - `int main` is not allowed, because `main` is a reserved word.
  - `temp$` is not allowed, because `$` is an invalid character.
  - `my flag` is not allowed, because of the space.
  - `1jason` is not allowed, because it starts with a number.

### Section 06: Operators
- `-` is the subtraction operator. Even when used with negative numbers, it's still the subtraction operator.
- `=` is the assignment operator.
- `==` is the equality operator.
- `!=` is the inequality operator.
- `&&` is the logical AND operator.
- `||` is the logical OR operator.
- `!` is the logical NOT operator.
- `sizeof` is an operator that returns the size of a variable in bytes.
- `&` is the bitwise AND operator.
- `|` is the bitwise OR operator.
- `^` is the bitwise XOR operator.
- `~` is the bitwise NOT operator.
- `<<` is the left shift operator.
- `>>` is the right shift operator.
- `~` is the bitwise NOT operator.
- Casting is the process of converting a value from one type to another.
- `(int) myNumber` is a way to cast the variable `myNumber` to an integer.
- `(double) myNumber` is a way to cast the variable `myNumber` to a double.
- `(char *) myString` is a way to cast the variable `myString` to a character pointer.
- `(int *) myPointer` is a way to cast the variable `myPointer` to an integer pointer.
- `sizeof` is an operator that returns the size of a variable in bytes. You use this to find out how much memory a variable takes up. Don't calculate the size of a variable in your head, use `sizeof` to find out.
- `*` is the pointer operator.
- `?` is the ternary operator.
- There is operator precedence, which is the order in which operators are evaluated. 
- `()` has the highest precedence, followed by `*`, `/`, `%`, `+`, `-`, `<<`, `>>`, `&`, `|`, `^`, `&&`, `||`, `?`, `=`, `+=`, `-=`, `*=`, `/=`, `%=`, `<<=`, `>>=`, `&=`, `|=`, `^=`, `,`.
- To solve for this, you can use parentheses to group the operations you want to evaluate first.
- If two operators have the same precedence, then the operator that is to the left is evaluated first. This is called left associativity.

### Section 07: Control Flow
- `if` is a statement that allows you to execute a block of code if a condition is true.
- `else` is a statement that allows you to execute a block of code if a condition is false.
- `else if` is a statement that allows you to execute a block of code if a condition is true.
- `switch` is a statement that allows you to execute a block of code based on the value of a variable.
- `case` is a statement that allows you to execute a block of code if a condition is true.
- `break` is a statement that allows you to exit a switch statement.
- `default` is a statement that allows you to execute a block of code if no other case matches.
- `while` is a statement that allows you to execute a block of code while a condition is true.
- `do-while` is a statement that allows you to execute a block of code while a condition is true.
- `for` is a statement that allows you to execute a block of code while a condition is true.
- `continue` is a statement that allows you to skip the rest of the code in a loop and go to the next iteration.
- `goto` is a statement that allows you to jump to a specific label in a program. This is generally discouraged, because it can make the code harder to read and understand.
- `return` is a statement that allows you to return a value from a function.
