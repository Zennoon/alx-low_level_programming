This directory was created on Oct 31, 2023 to hold my answers/submissions for
the project '0x0B. C - malloc, free'

malloc: is a standard library function, that takes as an argument an unsigned
integer num, and allocates num bytes of memory from the heap (Dynamic memory
allocation), and returns a pointer to the address of the first byte (base
address) of that allocated memory.

free: is a standard library function that takes as an argument a pointer to
a memory area which has been allocated using one of malloc, calloc, or realloc
and frees that memory.

--------------------------------------------------------------------------------

0-create_array.c: The function accepts as an argument an integer n, and a char c
and it allocates memory for n characters using malloc and the sizeof operator,
and assigns a pointer to the first byte. It then initializes each character with
the given c char using the pointer.

1-strdup.c: The function accepts a string as an argument and duplicates it using
dynamic memory allocation. It first gets the string's length from the _strlen
function, then allocates memory for that many characters + 1 for the '\0'. It
then copies each character, including the null terminator ('\0') from the
argument string to the newly allocated memory area. This new string is then
returned, if everything goes to plan. The allocated memory is deallocated in
the main function.

2-str_concat.c: The function accepts two strings as arguments and concatenates
them using dynamic memory allocation. First, it gets their length from the
_strlen function which treats NULL as an empty string. Then, using malloc,
it allocates memory that fits both strings + 1 for the null terminator. Then,
starting from the first string, and then the second string, if malloc doesn't
return NULL, it copies the contents of the strings to the newly allocated memory
If malloc returns NULL, it is returned as is (NULL). The function is structured
as this to avoid Segmentation fault incase malloc does return NULL.
