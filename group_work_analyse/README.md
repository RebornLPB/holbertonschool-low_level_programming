# C - Group Work Analysis

## Description
This project analyses a small C program that computes the average score of a classroom: a `Student` struct (name, score) is dynamically allocated for each student, their scores are summed, and the class average is printed.

## 📝 Learning Objectives
* Dynamically allocate an array of structs with `malloc`.
* Allocate and fill a `char *` field of a struct at runtime (`sprintf`).
* Compute an average as a `float` from integer data.
* Free every dynamically allocated resource (each `name`, then the array itself) to avoid memory leaks.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc`
* **Memory Management:** Every `malloc` must be matched by a `free`; verified with **Valgrind**.

## 📁 File List & Tasks Directory

| File | Description |
| :--- | :--- |
| `main.c` | Defines the `Student` struct, allocates 3 students with generated names and increasing scores, computes and prints the class average, then frees everything. |
| `test_prog` | Compiled binary of `main.c`. |

---

## 🚀 Compilation & Testing

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c -o test_prog
./test_prog
```

### Checking for Memory Leaks
```bash
valgrind --leak-check=full ./test_prog
```

---

## 👤 Author
* **Student:** [RebornLPB](https://github.com/RebornLPB)
* **GitHub:** [https://github.com/RebornLPB](https://github.com/RebornLPB)
* **School:** [Holberton School](https://www.holbertonschool.com/)
