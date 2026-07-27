# C - Singly linked lists

## Description
This project introduces the concept of dynamic data structures in C, focusing specifically on **singly linked lists**. Unlike contiguous arrays, linked lists allow for dynamic memory allocation spread across the heap, where each node contains both data and a pointer to the next element. This module covers iterating through list elements, inserting new nodes at various positions, measuring list length, and safely releasing node memory to prevent leaks.

All code is developed to strictly comply with the **Betty coding style**.

## 📝 Learning Objectives
* Understand when and why to use linked lists instead of arrays.
* Master the structure of a singly linked list node (`list_t`).
* Learn how to traverse, count, and print elements in a linked list.
* Learn how to add new nodes at the beginning (`head`) and at the end (`tail`) of a list.
* Understand how to safely free a dynamically allocated linked list without triggering dangling pointers or memory leaks.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Memory Safety:** Every list manipulation routine must pass Valgrind checks with zero memory leaks.

## 📁 File List & Tasks Directory

All functions utilize the `list_t` data structure defined in the `lists.h` header file:

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

| File | Task Title | Description |
| :--- | :--- | :--- |
| `lists.h` | Header File | Contains the definition of `struct list_s` (`list_t`) and all function prototypes. |
| `0-print_list.c` | 0. Print list | Prints all the elements of a `list_t` list. If `str` is `NULL`, prints `[0] (nil)`. |
| `1-list_len.c` | 1. List length | Returns the total number of elements in a linked `list_t` list. |
| `2-add_node.c` | 2. Add node | Adds a new node at the beginning of a `list_t` list (duplicates string using `strdup`). |
| `3-add_node_end.c` | 3. Add node at the end | Adds a new node at the end of a `list_t` list. |
| `4-free_list.c` | 4. Free list | Frees a `list_t` list along with all its allocated node strings. |

---

## 🚀 Compilation & Memory Testing

To compile your linked list routines with a test main template (e.g., `0-main.c` and `0-print_list.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_list.c -o 0-print_list
./0-print_list
```

### Memory Profiling with Valgrind
Since each node and string is dynamically allocated on the heap, always ensure all resources are freed correctly:

```bash
valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./4-free_list
```

Expected output signature:
All heap blocks were freed -- no leaks are possible