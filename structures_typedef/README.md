# C - Structures, typedef

## Description
This project introduces user-defined data types in C, focusing on **structures (`struct`)** and **type aliasing (`typedef`)**. The core objective is to learn how to encapsulate multiple related variables of different data types into a single custom object layout, manage custom types cleanly, and handle dynamic allocation/cleanup for structured data on the heap.

All source code is developed to strictly comply with the **Betty coding style** validation.

## 📝 Learning Objectives
* Understand what structures (`struct`) are and why they are useful for data packaging.
* Learn how to declare, initialize, and access members of a structure using both dot (`.`) and arrow (`->`) operators.
* Master the usage of `typedef` to define clean, descriptive custom typenames.
* Learn how to safely allocate and free structures dynamically on the heap.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Memory Management:** For advanced tasks involving dynamic data structures, code must run with zero leaks via Valgrind.

## 📁 File List & Tasks Directory

All files revolve around the modeling of a custom data structure called `struct dog`, aliased as `dog_t`.

| File | Task Title | Description |
| :--- | :--- | :--- |
| `dog.h` | 0. poppy | Header file defining the structure `struct dog` and its type alias `dog_t`, along with all function prototypes. |
| `1-init_dog.c` | 1. A dog is the only thing on earth... | Initializes a variable of type `struct dog` using a pointer. |
| `2-print_dog.c` | 2. A dog will teach you unconditional love... | Prints the element values of a `struct dog`. If any element is `NULL`, outputs `(nil)`. |
| `4-new_dog.c` | 4. Jack Russell Terrier | Advanced task: Creates a new dog profile (`dog_t`) by dynamically duplicating its name and owner on the heap. |
| `5-free_dog.c` | 5. How many legs does a dog have... | Advanced task: Safely frees all memory allocations bound to a `dog_t` profile. |

---

## 🚀 Compilation & Testing

To compile your structure manipulation routines with a test main template (e.g., `main.c` and `2-print_dog.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c 2-print_dog.c -o print_dog
./print_dog