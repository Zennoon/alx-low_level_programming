This directory was created in Oct 16, 2023 to hold my submissions for the
project '0x05. C - Pointers, arrays and strings'.

0-reset_to_98.c: This file uses the concept of pointers. Pointers are variables
that hold the address in memory of another variable using the reference
operator (&). Then, using the dereference operator (*), we can access and
modify the value stored in the address which a pointer points to. This can be
used to pass arguments to functions by reference, so that the function can
modify these arguments.

1-swap_int.c: This source file uses the same concept as above, using pointers
to alter the value (in this case swap the value) of two variables.

2-str_len.c: This source file uses the concepts of pointers, and strings.
String names, just like array names are constant pointers to the first
character/element. So, using pointer arithmetic, we can increment a pointer to
the first character of a string until it reaches the null terminator to find
its length

3-puts.c: This source file still uses pointers, and strings, but in a modified
manner. Strings are just one dimensional arrays of characters and as mentioned
string names are just constant pointers to the first character of the string.
So, instead of declaring another pointer (because this one is constant), we
just use the concept of *(arr_name + n) = arr_name[n] and access each character
of the string to print it using _putchar until *(str_name + n) becomes the null
terminator ('\0').

4-print_rev.c: This source file combines what we did in the previous 2 tasks.
First, we got the length of the string, then, assigned a pointer to the last
character of the string using the length. Finally, we decrement that pointer
until we have printed all the characters of the string.

5-rev_string: This source file swaps the chars at both sides of a string, moving
closer to the center in each iteration. One thing I struggled with during this
task, was that I was initializing my test strings as char pointers rather than
char arrays, so when I tried mutating the string (which is a constant pointer),
it resulted in a segfault, because I was trying an illegal modification. The
problem was resolved when I made the strings declared as arrays, because arrays
are mutable.

6-puts2.c: This source file is pretty straight forward. It just uses the same
concepts as 3-puts.c, only this time, we use the loop counter to only print
the character if it is even.

7-puts_half.c: This source file uses a cheeky way out of checking if the length
of the string is even or not, using integer division. It just starts printing
from s[len - (len / 2)]. If len is even, then it starts from half, if len is
odd, then, it starts printing at s[(len / 2) + 1], just as intended.

8-print_array: This source file uses the concept of arrays more directly. It
accesses the elements of the array by indexing, using a loop to print the
desired number of elements of the array.

9-strcpy.c: This source file revisits the concept of strings being immutable,
and how trying to change a string pointer will cause a segfault. This source
code treats the strings as arrays, and copies each value until '\0' is reached
then, it will add '\0' because the string needs to be null terminated

100-atoi.c: This source file uses the given string as an array, and loops each
character to check if it is a digit or a special sign (-). One thing that might
be of interest is why I made num unsigned. One test case that I used in the
100-main.c file is the string "-2147483648". The limit of an integer value is
-2147483648 to 2147483647. If I make the num variable signed, when it holds the
value 2147483648 before it is returned multiplied by sign (-1), it will create
a signed integer overflow because it is over the limit. However, if I make it
unsigned, it can hold the value, then when I return it, it is multiplied by
-1 which makes it -2147483648, which is within the limit of a signed int.
