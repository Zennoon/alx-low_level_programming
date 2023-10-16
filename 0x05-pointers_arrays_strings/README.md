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
