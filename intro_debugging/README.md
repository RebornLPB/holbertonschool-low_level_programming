# Intro Debugging

This repository is dedicated to learning and practicing fundamental debugging techniques in C. The goal is to learn how to identify, analyze, and fix structural and logical bugs in code.

## 📝 Description

The project contains practical exercises aimed at:
* Understanding the execution flow of a program.
* Analyzing loop conditions and incorrect return values.
* Using strict documentation comments (Betty/DocBlock style) to clarify the intended behavior of the code versus its actual behavior.

## 📁 File List & Tasks Directory

| File | Description |
| :--- | :--- |
| `sum_to_n.c` | `sum_to_n(n)` computes the sum of all integers from 1 to `n` with a loop; `main` prints `sum_to_n(10)`. |
| `row_sums.c` | `row_sum(row, cols)` sums one row of a multiplication table and `total_sum(rows, cols)` adds up every row; `main` prints `total_sum(3, 3)`. |
| `multiplication_table.c` | `print_table(size)` prints a `size x size` multiplication table with nested loops; `main` prints a 4x4 table. |

In each file, the code below the `-- DO NOT Modify the code below this line --` comment is the fixed test `main`; only the function above it is meant to be debugged.

## 🛠️ Technologies & Tools

* **Language :** C (C99)
* **Compiler :** `gcc`
* **Suggested compilation options :** `-Wall -Werror -Wextra -pedantic -std=gnu89`

## 🚀 Usage

To compile a specific file in this folder, use the following command in your terminal:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <output>
```
