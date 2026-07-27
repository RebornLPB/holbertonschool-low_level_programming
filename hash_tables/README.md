# C - Hash tables

## Description
This project focuses on implementing **hash tables** in C. A hash table is a data structure that maps keys to values for efficient lookup, insertion, and deletion operations. This project covers the implementation of a hash function (using the DJB2 algorithm), handling collisions using chaining with singly linked lists, and managing dynamic memory allocations on the heap.

All functions are written in strict compliance with the **Betty coding style**.

## 📝 Learning Objectives
* Understand what a hash function is and what makes a good hash function.
* Learn what a hash table is, how it works, and how to handle collisions.
* Master collision handling using chaining with linked lists.
* Understand the advantages and drawbacks of hash tables compared to arrays and linked lists.
* Learn how to dynamically allocate and safely free complex nested data structures in dynamic memory.

## 🛠️ Requirements & Engineering Constraints
* **OS:** Ubuntu 20.04 LTS
* **Compiler:** `gcc` (Compilation flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`)
* **Coding Style:** 100% compliant with the Betty Style Guide (`betty-style.pl` and `betty-doc.pl`).
* **Memory Safety:** Every dynamic allocation must pass Valgrind checks with zero memory leaks.

## 📁 File List & Tasks Directory

All functions utilize the data structures defined in the `hash_tables.h` header file:

```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string (unique)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our Hash Table to use Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

| File | Task Title | Description |
| :--- | :--- | :--- |
| `hash_tables.h` | Header File | Contains data structure definitions (`hash_node_t`, `hash_table_t`) and all function prototypes. |
| `0-hash_table_create.c` | 0. >>> ht = {} | Creates a hash table with a specified size. Returns a pointer to the newly created hash table. |
| `1-djb2.c` | 1. djb2 | Implements the djb2 algorithm to compute hash values for string keys. |
| `2-key_index.c` | 2. key -> index | Gives the index of a key within the hash table array using the hash function and modulo arithmetic. |
| `3-hash_table_set.c` | 3. >>> ht['key'] = 'value' | Adds or updates an element in the hash table. Handles collisions using chaining (adding at the top of the list). |
| `4-hash_table_get.c` | 4. >>> ht['key'] | Retrieves a value associated with a key from the hash table. Returns `NULL` if key couldn't be found. |
| `5-hash_table_print.c` | 5. >>> print(ht) | Prints a hash table in Python dictionary style format (e.g. `{'key': 'value', ...}`). |
| `6-hash_table_delete.c` | 6. >>> del ht | Deletes a hash table, freeing all nodes, keys, values, and array structures completely from memory. |

---

## 🚀 Compilation & Testing

To compile your hash table implementation with a test main file (e.g., `3-main.c` and required source files), run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o ht_set
./ht_set
```

### Memory Leak Testing with Valgrind
Always verify that all nodes, duplicated strings, array allocations, and table structures are freed cleanly:

```bash
valgrind --tool=memcheck --leak-check=full --show-leak-kinds=all ./ht_set
```

Expected output signature:
All heap blocks were freed -- no leaks are possible