This directory was created to hold my answers / submissions for the project
0x01. C - Variables, if, else, while

0-positive_or_negative: The code first generates a random number, then,
if...else if...else statement is used to decide if the number is positive,
negative, or 0. Then, a message is printed accordingly

1-last_digit.c: The code generates a random number, then the modulo operator is
used to get the last digit of the number. Then, a message is printed depending
on the value of that last digit using an if...else if...else statement

2-print_alphabet.c: The code uses the fact that chars are just integers, and
uses a while loop to print a character and then increment its value to the next
character until 'z' is printed. Then, an additional putchar is used to print
a new line.

3-print_alphabets.c: The code first initializes the char variable to 'a'
Then it uses a while loop to print the entire lowercase alphabet.
After, it assigns the variable to 'A', and uses another while loop
to print the uppercase alphabet. Last, an additional putchar is used
to print a new line

4-print_alphabt.c: The code uses a while loop to print the alphabet, as
before. This time, it uses an if statement inside the loop to check
if the current character is not an 'e' or a 'q', and to print only if
it is neither.

5-print_numbers.c: The code initializes an unsigned short
(saving memory) at 0 and then uses a while loop to print the number and
increment it until it reaches 10, in which case it exits the loop and prints
a new line.

6-print_numberz.c: The code uses the ASCII decimal integers of characters
'0'-'9', which are 48-57 respectively, and passes these integers to putchar
which translates them to their ASCII characters.

7-print_tebahpla.c: The code initializes a variable at 'z', and prints and
decrements it until it prints 'a'

8-print_base16.c: The code uses two loops, the first to print from '0' to '9',
and the second one to print from 'a' to 'f', imitating the digits of base 16

9-print_comb.c: The code uses the ASCII code of characters '0' to '9', to print
them. Next to each number, a ',' and a ' ' is printed, with the exception of 9.
For 9, it only prints the '9' itself

100-print_comb3.c: The code first initializes a variable to the ASCII code of
'0', then until it reaches the ASCII code for '9', it sets another variable
to the next character (num1 + 1), and until this variable reaches '9'
(inclusive), it prints   the combination of the two characters, along with
',' and ' '. The exception is the last combination '89', in which case, only
the combination is printed.

101-print_comb4.c: The code adds another layer to the above (100-print_comb3.c)
implementation

102-print_comb5.c: The code makes use of a pattern I noticed in the
given example. In each combination, the first number (set of numbers) is
less than the second set. So using while loops, the code prints each
combination, starting from first number '00' (second number has to be greater
so it starts at '01') to first number '98' (second number is 99). The first
number can't be '99' because the second number won't have any options, so
it stops at '98 99'
