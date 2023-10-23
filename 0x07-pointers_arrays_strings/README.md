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

4-strpbrk.c: This function finds the first occurence in s, of any character in
accept, and returns a pointer to it. This one also uses the _strchr function
from task 2. For every character in s, it checks if it is found in accept,
using _strchr. If it is in accept, it returns a pointer to that character.
After checking each character, if no match is found, it returns NULL.

5-strstr.c: This function searches a string for another string. If found, it
returns a pointer to the substring that matches the search string. Here, we use
_strlen to find the length of the searched and the searched for strings to help
with the looping and avoid segmentation fault. For each character, we check if
the next len_ndl character (if they match with needle) using _strncmp.

7-print_chessboard.c: Pretty straightforward. The function uses two for loops,
one of which is nested inside another, to print the elements of a 2D 8*8 array
in chessboard format.

8-print_diagsums.c: This function challenges us to visualize how a 2D array is
stored in memory. Actually, it is just like a 1D array, except each arr[i] can
now be used as a pointer to the first element of that row. The catch here is
that the array is passed to the function as an ordinary pointer with no second
indexing like a 2D array. If we imagine a 2D array:
	 int arr[3][3] = {
	     {1, 2, 3},
	     {4, 5, 6},
	     {7, 8, 9}
	     }
	     This array is represented in memory contigiously like so:
	     1 - 2 - 3 - 4 - 5 - 6 - 7 - 8 - 9
	     In our case, the array is passed to us only as a pointer to the
	     first element. But, we can access any element inside using simple
	     maths.
	     If we want to access arr[i][j], with arr as a pointer, we use
	     *(arr + (i * size + j))
	     So, in a square matrix, to access the left to right diagonal, since
	     i = j (arr[0][0], arr[1][1], arr[2][2]...), we use
	     *(arr + ((i * size) + i)), where i runs from 0 to size - 1
	     For the right to left diagonal, if we look at the elements of the
	     diagonal, we notice a pattern. arr[0][size - 1], arr[1][size - 2],
	     arr[2][size - 3], ..., arr[size - 1][0]. From this pattern, we see
	     that the second index (j) is always (size - 1 - i). If we replace
	     this, in the original formula, we get
	     *(arr + ((i * size) + size - 1 - i)), i running from 0 to size - 1

Using these formulas, we access the diagonal elements and compute the sums