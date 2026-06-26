# 0x00. C - Hello, World

This project marks the beginning of learning the C programming language and the compilation process at Holberton School. The objective is to become familiar with the Linux development environment, basic terminal commands, and the minimal structure of a C program.

## 📝 Key Concepts

* **Compilation Stages:** Understanding the roles of the preprocessor, compiler, assembler, and linker using `gcc`.
* **Standard Input/Output:** Utilizing native functions like `printf` and `puts` to display text, as well as using `write` for system calls.
* **Bash Scripts:** Automating intermediate compilation steps through custom shell scripts.

## 🛠️ Specifications and Constraints

* **Coding Style:** Strict compliance with the **Betty** style guide (both for code and documentation).
* **Allowed Functions:** Forbidding the use of `printf` when `puts` or `write` is explicitly required (and vice versa).
* **Compilation:** No warnings are tolerated during compilation.

## 📁 File List & Tasks

| File | Type / Function | Description |
| :--- | :--- | :--- |
| `0-preprocessor` | Bash Script | Runs a C file through the preprocessor and stores the result in another file. |
| `1-compiler` | Bash Script | Compiles a C file but does not assemble it (generates a `.s` assembly file). |
| `2-assembler` | Bash Script | Assembles a C file but does not link it (generates a `.o` object file). |
| `3-name` | Bash Script | Fully compiles a C program and generates an executable named `cisfun`. |
| `4-puts.c` | `main` function | C program that prints an exact string followed by a new line using the `puts` function. |
| `5-printf.c` | `main` function | C program that prints an exact string followed by a new line using the `printf` function. |
| `6-size.c` | `main` function | C program that prints the size in bytes of various data types on the target machine (`char`, `int`, etc.). |
| `101-quote.c` | `main` function | Advanced task: Prints a specific message to the standard error (`stderr`) using the `write` function. |

## 🚀 Standard Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c -o puts
./puts