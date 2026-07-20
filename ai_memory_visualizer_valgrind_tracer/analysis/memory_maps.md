# Memory Behavior Analysis & Visualizations

## 1. Stack Memory & Recursion (`stack_example.c`)

### Stack Frame Lifecycle and Layout
In `stack_example.c`, the execution demonstrates the LIFO (Last-In, First-Out) stack structure through recursive calls to `walk_stack()`.

On x86_64 architecture, the stack grows downwards toward lower memory addresses. Each call to `walk_stack()` allocates a new stack frame containing its parameter `depth` and local variable `marker`. Subsequently, `walk_stack()` invokes `dump_frame()`, which pushes another frame containing `local_int`, `local_buf`, and `p_local`.

#### Memory Layout Sequence:
1. **`main()` Call:** Initial stack frame created.
2. **`walk_stack(0, 3)` Enter:** Frame `walk_stack(0)` pushed. `marker` allocated at highest stack address.
3. **`dump_frame("enter", 0)` Call:** Frame `dump_frame` pushed above `walk_stack(0)`.
   - `local_int` (value: 100) and `local_buf` ('A') initialized.
   - `p_local` points to `&local_int` within the same frame.
4. **`dump_frame` Exit:** Frame popped. Its stack memory is invalidated and subject to overwrite by subsequent frames.
5. **Recursion (`depth = 1, 2, 3`):** Sub-frames `walk_stack(1)`, `walk_stack(2)`, and `walk_stack(3)` are sequentially pushed at decreasing memory addresses (`&marker` addresses decrease at each step).
6. **Unwinding:** Upon reaching `max_depth = 3`, stack frames are popped in reverse order during function returns (`exit` phase).

### Variable Lifetimes
- **`marker`:** Lifetime spans from the entry of `walk_stack(depth)` until its return. It remains allocated and preserved while child recursive frames are executing above it.
- **`local_int` / `local_buf`:** Lifetime is strictly limited to the execution scope of `dump_frame()`. Once `dump_frame()` returns, these addresses become unallocated stack space. Returning `p_local` outside `dump_frame()` would yield a dangling stack pointer.

---

## 2. Heap Allocations & Lifetime Management (`heap_example.c`)

### Dynamic Memory Architecture
Unlike stack allocations, heap memory persists until explicitly freed via `free()`. In `heap_example.c`, allocations occur via two distinct `malloc()` calls inside `person_new()`:

1. **Outer Allocation:** `malloc(sizeof(Person))` allocates a struct containing a pointer `name` (8 bytes) and an integer `age` (4 bytes + padding).
2. **Inner Allocation:** `malloc(len + 1)` allocates a buffer on the heap for the string literal copy.

### Memory Ownership and The Memory Leak
- **`bob` (Proper Deallocation):**
  - Executing `free(bob->name)` deallocates the inner heap chunk holding `"Bob"`.
  - Executing `free(bob)` deallocates the outer struct chunk holding the `Person` metadata.
  - Ownership is cleanly surrendered, leaving zero leaks.

- **`alice` (Memory Leak Analysis):**
  - `person_free_partial(alice)` invokes `free(alice)` without calling `free(alice->name)` first.
  - Deallocating `alice` destroys the pointer variable storing the address of the `"Alice"` string heap memory block.
  - The heap chunk containing `"Alice"` remains marked as allocated by the heap manager, but no pointer in the program holds its address anymore. This constitutes a **definite memory leak** (unreachable heap block).

---

## 3. Pointer Aliasing & Use-After-Free (`aliasing_example.c`)

### Pointer Aliasing Mechanism
The call `a = make_numbers(5)` allocates an array of 5 integers on the heap.
Executing `b = a;` performs a pointer copy, creating an **alias**. Both pointers `a` and `b` hold identical memory addresses pointing to the heap buffer.

### Use-After-Free State Traversal
1. **Deallocation:** `free(a)` informs the heap allocator that the memory chunk at address `a` is available for future allocations.
2. **Dangling Pointer Creation:** Neither `a` nor `b` is set to `NULL`. Pointer `b` becomes a dangling pointer; it references memory that is no longer reserved for the program.
3. **Invalid Read (`printf("%d", b[2])`):** The program attempts to dereference `b + 2 * sizeof(int)`. This causes an **Invalid Read** under Valgrind, as the program accesses unallocated or recycled heap memory.
4. **Invalid Write (`b[3] = 1234`):** Modifying memory through a dangling pointer causes an **Invalid Write**. This corrupts heap structures or overwrites data re-allocated to other parts of the application, leading to non-deterministic execution bugs.

---

## 4. Crash Analysis & Deterministic Segfault (`crash_example.c`)

### Causal Failure Chain
1. **Initialization:** Variable `n` is set to `0`.
2. **Call:** `allocate_numbers(0)` is invoked.
3. **Guard Clause Trigger:** Inside `allocate_numbers()`, `if (n <= 0)` evaluates to true, returning `NULL` (`0x0`).
4. **Pointer Assignment:** Pointer `nums` in `main()` receives `NULL`.
5. **Invalid Memory Access:** The line `nums[0] = 42;` attempts to write 4 bytes of integer data to address `0x0 + 0 * sizeof(int)`.
6. **Segmentation Fault:** Address `0x0` falls within unmapped page zero protected by the OS MMU (Memory Management Unit). The CPU triggers a page fault exception, and the kernel terminates the process with `SIGSEGV`.

---

## 5. Critical AI Review & Correction

### Initial AI Hypothesis (Incorrect)
> **AI Statement:** *"In `aliasing_example.c`, calling `free(a)` destroys the variable `a` and makes `b` point to an invalid memory location on the stack. The program crashes on `b[3] = 1234` because `b` is pointing to a non-existent stack address."*

### Analysis of AI Inaccuracies
1. **Memory Region Confusion:** The AI claimed the memory was on the **stack**, whereas `make_numbers()` allocated the array on the **heap** via `malloc()`.
2. **Variable Destruction Fallacy:** The AI claimed `free(a)` *destroys the variable `a`*. `free()` does not destroy local pointer variables; `a` and `b` continue to exist on `main()`'s stack frame holding the original memory address until `main()` returns. `free()` only releases the underlying heap memory block referenced by the address.
3. **Vague Misdescription:** Describing `b` as pointing to a "non-existent stack address" is technically inaccurate. `b` points to a valid numerical virtual memory address within the process address space, but that heap chunk is no longer allocated to `b`.

### Technical Correction
- `a` and `b` are local stack variables containing identical heap addresses.
- `free(a)` releases the heap chunk managed by the runtime heap allocator; it does not erase or reset local variables `a` or `b`.
- The subsequent access via `b[3]` represents a **Heap Use-After-Free (Invalid Write)**, not an invalid stack access.