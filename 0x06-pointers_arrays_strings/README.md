This directory was created on Oct 19, 2023 to hold my answers / submissions for
project 0x06. C - More pointers, arrays and strings of the ALX SE foundations
program.

0-strcat.c: This source file concatenates two strings, and returns a pointer to
the destination string (which can be the string name itself, it is a constant
pointer to the first character.). It first gets the length of both strings, and
starts from len1 index (which is last character, ('\0')) of destination string,
which overwrites the null character and concatenates until len2 (length of the
second string is reached). Finally, it appends '\0' to the destination string
because its original was overwritten.

1-strncat.c: Really similar to 1-strcat.c, except this time we are given the
number of bytes (characters) to concat from src string to dest string. If this
number is greater than the src string length, it is reduced to the length. Then
n bytes (characters) of src string are appended to dest string, and finally, the
'\0' is added for reasons stated in the 0-strcat.c description.

2-strncpy.c: Copies the first n bytes (characters (bc char is 1 byte)) of src
into dest. Necessarily, dest has to be large enough to accept n bytes or else
buffer overrun will occur. There are two cases:
       1. n <= len(src): In this case, the first n bytes of dest are replaced
       with the first n bytes of src. The rest are left as is.

       2. n > len(src): Here, the first len(src) characters are replaced with
       src characters (except its '\0' character). Then, the rest (n - len(src))
        bytes are replaced with '\0' characters

In both cases, necessarily all n characters of dest are replaced, either with
characters of src or '\0'.

3-strcmp.c: In this source file, we are comparing two strings character by
character. Once we find an index where their characters are not equal, we
return the difference of their ASCII code (which would be greater than 0
if s1 > s2 and less than 0 if s1 < s2). If one or both strings terminate
without us finding a difference, we check if one of them is still not terminated
 and if so, grab the ASCII code of the first of the remaining characters.
 If both are terminated, we return 0.
    	 Eg. s1 = "Hedge" and s2 = "Hello" : The first index of difference is 2.
	 s1[2] is 'd' with ascii code 100, s2[2] is 'l' with ascii code 108,
	 their difference (-8) is returned, indicating s1 < s2

	 s1 = "Hell" and s2 = "Hello" : s1 terminates without us finding a
	 difference, but s2 still has 'o' with ascii code 111. 111 is returned

4-rev_array.c: This source file originally used a temporary array to hold the
values of the original array reversed. But, the C90 standard, disallows
declaring an array with variable length, so I decided to use 2 pointers, one
coming from the beginning to the middle, and the other coming from the last
to the middle. These pointers swap their values along the way.

5-string_toupper.c: The string uses a pointer to loop through the string (using
pointer arithmetic), and each time, it dereferences the pointer and checks if
the value in that address is lowercase or not. If it is, it is converted to
uppercase using ASCII code manipulation. In summary, a string declared as a
pointer can not be mutated, but if it is declared as an array, its characters
can be mutated.

6-cap_string.c: We go through the string on character at a time, and check if
it is a separator character using is_separator function. If it is, we check if
the next character in the string is a lowercase letter. If so, we capitalize it
and skip one iteration because the next character in the loop is the one we
just capitalized, so no point in checking. Just optimizing where I can :).
