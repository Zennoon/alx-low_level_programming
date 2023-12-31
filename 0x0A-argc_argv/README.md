This directory was created on Oct 27, 2023 to hold my answers/submissions
for the project '0x0A. C - argc, argv' of ALX SE Foundations.

0-whatsmyname.c: The function prints the name of the program by printing the
value of argv[0], which will always be the name of the program, if not a null
string. The argc parameter is unused, so to suppress the 'Unused variable' error
, I have casted it to void.


1-args.c: The function prints the number of arguments passed into the program
(not into the command line which would also mean the program name) when it is
run. argc counts the program name as well, so we have to decrement it to get
the correct value. The argv parameter is unused inside the function, so to
suppress the 'Unused variable' warning/error, I have set the unused attribute
on it.

2-args.c: The function prints all the arguments (including the first one AKA
the program name), which are the elements of the argv array (in string form)
and the length of argv is argc, so we just loop.

3-mul.c: The function prints the product of two command line arguments passed
after the program name, by first converting them to integers (using atoi). If
more or less than two arguments are passed, it prints "Error", and exits with
a failure status.

4-add.c: The function prints the sum of the command line arguments after they
have been converted to an int. If any of the arguments is not a digit, it
prints "Error" and returns 1. The trick here is converting the strings to
ints using _atoi. If _atoi encouters a non-digit string, it returns 0,
so we can use that, The problem is, when _atoi encounters "0", which is a valid
digit string, it returns 0 too. So, to check if a string is non-digit, we check
if it not "0", and if _atoi of that string returns 0. I have used my own _atoi
function because the standard function atoi checks for the initial part of the
string, and if it encounters a non-digit, it returns the number it found until
that character, so for example, atoi("123abc"), would return 123, whereas my
implementation checks the entire string and if it finds a single non-digit char
it returns 0, regardless of previously found digits.

100-change.c: The function gets a value of cents from the command line and calcs
the minimum number of coins of value 25, 10, 5, 2, or 1 it would take to make
change for that amount of cents. First we check the validity of the command line
argument, we convert it into an int, and then, starting from 25, and going down
to 1, we see how many of each coin the given amount of cents can take. If we
take 40 cents for example, we can have one 25 cents coin, then we are left with
15 cents (40 % 25). We can have one 10 cents coin, then we have 5 cents
remaining (15 % 10). We can have one 5 cents coin, we are left with 0 cents
(5 % 5). We can't have any 2 cents coin or 1 cent coin, because we have 0 cents
remaining, so in total, it took us 3 coins to make change for 40 cents.