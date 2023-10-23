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

2-strchr.c: This function searches a string for a character. If it is there, it 
returns a pointer to the first occurence of it. If not found, it returns NULL.
It uses the null terminator as the limit to the loop, until '\0' is encountered,
each character is checked. If the current character is the desired one, return
the pointer which we were using to loop the string.

3-strspn.c: This function starts from the beginning of a given string and checks
if the current character is in another string using the above function _strchr,
if it is, it increments a variable, if not, it breaks the loop. At the end, it
returns that count variable.
