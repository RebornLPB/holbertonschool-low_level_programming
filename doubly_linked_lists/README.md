# C - Doubly linked lists

## Description
This project focuses on **doubly linked lists** in C. Unlike singly linked lists where traversal is strictly forward, doubly linked lists feature nodes with pointers to both the next and the previous nodes (`next` and `prev`). This bidirectional structure allows for efficient two-way traversal, easier node deletions, and insertions from both the head and tail of the list.

All functions are written to pass the strict **Betty coding style** validation.

## 📝 Learning Objectives
* Understand what a doubly linked list is and how it differs from a singly linked list.
* Learn how to declare, initialize, and manipulate nodes using `dlistint_t`.
* Master bidirectional traversal (navigating forward and backward).
* Learn how to safely insert, remove, and free nodes while updating both `prev` and `next` pointers.
* Prevent dangling pointers and memory leaks during complex list operations.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Memory Safety:** Every dynamic allocation must pass Valgrind checks with zero memory leaks.

## 📁 File List & Tasks Directory

All functions utilize the `dlistint_t` data structure defined in the `lists.h` header file:

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

| File | Task Title | Description |
| :--- | :--- | :--- |
| `lists.h` | Header File | Contains the definition of `struct dlistint_s` (`dlistint_t`) and all function prototypes. |
| `0-print_dlistint.c` | 0. Print list | Prints all the elements of a `dlistint_t` list. Returns the number of nodes. |
| `1-dlistint_len.c` | 1. List length | Returns the total number of elements in a linked `dlistint_t` list. |
| `2-add_dnodeint.c` | 2. Add node | Adds a new node at the beginning of a `dlistint_t` list. |
| `3-add_dnodeint_end.c` | 3. Add node at the end | Adds a new node at the end of a `dlistint_t` list. |
| `4-free_dlistint.c` | 4. Free list | Frees a `dlistint_t` list completely from memory. |
| `5-get_dnodeint.c` | 5. Get node at index | Returns the nth node of a `dlistint_t` linked list. If the node does not exist, returns `NULL`. |
| `6-sum_dlistint.c` | 6. Sum list | Returns the sum of all the data (`n`) of a `dlistint_t` linked list. Returns `0` if empty. |
| `7-insert_dnodeint.c` | 7. Insert at index | Inserts a new node at a given position in the list. |
| `8-delete_dnodeint.c` | 8. Delete at index | Deletes the node at index `index` of a `dlistint_t` linked list. |

---

## 🚀 Compilation & Testing

To compile your doubly linked list routines with a test main file (e.g., `0-main.c` and `0-print_dlistint.c`), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_dlistint.c -o 0-print_dlistint
./0-print_dlistint
```

### Memory Leak Testing with Valgrind
Always ensure that all nodes are freed correctly and no pointers are orphaned:

```bash
valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./4-free_dlistint
```

Expected output signature:
All heap blocks were freed -- no leaks are possible