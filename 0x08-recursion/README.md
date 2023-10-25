This directory was created on Oct 25, 2023 to hold my answers / submissions
for the project 0x08. C - Recursion in ALX SE Foundations

0-puts_recursion.c: The function uses the fact that in C, strings are terminated
by a '\0', this is used as the base case. We are given a string (pointer to
a char), we print the value of the pointer (the char), then pass the rest of
the string by using pointer arithmetic (s + 1). This goes on until the value
of the pointer passed is '\0', in which case a newline is printed and void
is returned.
