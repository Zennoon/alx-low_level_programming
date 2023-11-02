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

2-calloc.c: The function is an implementation of the actual calloc function
using malloc. We are given the number of members/elements and the size in
bytes of each element. The thing that most differentiates calloc from malloc
is that calloc initializes the allocated memory bytes to zero. So, to have
control on the allocated memory, I have assigned the allocated memory from
malloc to a char pointer (since chars are 1 byte (on most machines at least))
so when I do arithmetic on it, it jumps one byte (whereas in int pointers it
would be 4 bytes and so on). So, for instance, *(arr + 1) would dereference the
address one byte next to arr. Finally, after initializing the memory to 0, I
have returned the pointer cast to void, so that it can be promoted to other
types by the function caller.

3-array_range.c: The function accepts two numbers as arguments, the first one
less than or equal to the second, and generates an array in heap memory
containing all the numbers between those 2 numbers (inclusive). It uses calloc,
but it could have been implemented by malloc just as easily.
