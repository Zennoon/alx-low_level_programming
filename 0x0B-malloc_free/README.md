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

3-alloc_grid.c: OOOOH this was an exciting one. The core concept that you have
to remember here is that malloc returns a pointer to the memory it just
allocated, and you can store pointers in this memory. Basically, the task is
creating a 2D array of given width of height. Height can be interpreted as
number of rows, and width as number of columns. Now, basically a 2D array is an
array of 1D arrays. So, here is the basic idea: If we create a pointer to a
pointer of an integer ('two_d_arr'), and allocate it memory enough to store
'height' pointers to integers, we can then access these pointers as two_d_arr[x] 
Now, for each of these pointers, if we allocate enough memory to store 'width'
number of integers, we can access these integers as two_d_arr[x][y]. And this is
basically what the 2D array is; a pointer to an allocated area containing
pointers, each of which point to an allocated area containing integers.
Hopefully, you will understand it better by just looking at the code.

4-free_grid.c: This function frees up the memory allocated by malloc to create
the 2D array from the previous task. First, it frees up the inner allocations,
or the 'rows', then it frees the pointer to these pointers.
