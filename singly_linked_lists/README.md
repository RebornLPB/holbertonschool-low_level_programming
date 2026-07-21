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
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;