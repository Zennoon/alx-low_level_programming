This directory was created on Oct 25, 2023 to hold my answers / submissions
for the project 0x08. C - Recursion in ALX SE Foundations

0-puts_recursion.c: The function uses the fact that in C, strings are terminated
by a '\0', this is used as the base case. We are given a string (pointer to
a char), we print the value of the pointer (the char), then pass the rest of
the string by using pointer arithmetic (s + 1). This goes on until the value
of the pointer passed is '\0', in which case a newline is printed and void
is returned.

1-print_rev_recursion.c: The function does the recursive call before the
printing, so, once we have reached '\0', we are done with the recursions, and
start executing the line after the recursive calls (_putchar), printing one
character at a time upwards to the first function call (which has the full
string).

2-strlen_recursion: The function uses the concept of pointer arithmetic and the
fact that (if s is a string/char pointer) length of s = 1 + (s + 1) and length
of "" is 0 (Base case).

3-factorial.c: The classic! Uses the fact that 0! = 1 as the base case, and
n! = n * (n - 1)! as our recursive path
