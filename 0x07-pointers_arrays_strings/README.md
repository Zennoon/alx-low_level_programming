This directory was created to hold my answers / submissions for project
0x07. C - Even more pointers, arrays and strings

0-memset-c: This function fills a given number of bytes of a given character
array with a given character. It is pretty straight forward. It uses the concept
of pointer arithmetic with a loop variable 'i' to set *(arr + i) to the required
character until the required number of bytes are filled.

1-memcpy.c: This function fills a given memory area with the content of another
one. In other terms, it copies one memory area to another. It uses the same
concept as 0-memset.c, except, the loop variable 'i', is used to access both
the dest and src memory areas, so we use *(dest + i) = *(src + i), until the
desired number is reached.
