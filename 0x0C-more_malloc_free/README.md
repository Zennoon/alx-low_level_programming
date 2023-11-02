This directory was created on Nov 2, 2023 to hold my submissions/answers for the
project '0X0C. C - More malloc, free' of ALX SE Foundations

0-malloc_checked.c: The function just receives an unsigned integer and, using
malloc, allocates that amount of memory. The tricky part was exiting with a
status of 98, if malloc fails. It is straight forward, but echo $? didn't
output the desired number (98) in my Vagrant machine when I tried allocating
INT_MAX amount of mem.

1-string_nconcat.c: The function receives s1, s2, and an integer, and it concats
s1, and n bytes of s2 and returns the result if successful. If not, it just
returns NULL. In this implementation, the minimum of n and the length of s2 is
considered when calculating the amount of memory to allocate. In a previous
implementation, I tried to concat s1, and s2 completely and then realloc to the
desired amount, but the checker in ALX has checks with limited heap memory that
would suffice for s1, and n bytes of n2 but not s1 and s2.
