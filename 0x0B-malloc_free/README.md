This directory was created on Oct 31, 2023 to hold my answers/submissions for
the project '0x0B. C - malloc, free'

malloc: is a standard library function, that takes as an argument an unsigned
integer num, and allocates num bytes of memory from the heap (Dynamic memory
allocation), and returns a pointer to the address of the first byte (base
address) of that allocated memory.

free: is a standard library function that takes as an argument a pointer to
a memory area which has been allocated using one of malloc, calloc, or realloc
and frees that memory.

0-create_array.c: The function accepts as an argument an integer n, and a char c
and it allocates memory for n characters using malloc and the sizeof operator,
and assigns a pointer to the first byte. It then initializes each character with
the given c char using the pointer.
