<h1>Function pointers</h1>
This directory was created on Nov 8, 2023 to hold my answers/submissions for
the project '0x0F. C - Function pointers' of ALX SE Foundations.

0-print_name.c: The function accepts a function pointer and a string as an
argument and prints the string using the passed function. This is done by just
passing the name as an argument to the callback function (the function whose
address is given by the pointer).

1-array_iterator: The function, given an array and a function pointer 'action',
calls back 'action' on every element of given array.

2-int_index.c: The function is given an array, and a pointer to a function, and
it returns the index of the first element in that array that the given function
returns a non-zero value for. If no such elements are found, it returns -1.
