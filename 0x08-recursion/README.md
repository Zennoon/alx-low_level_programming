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

4-pow_recursion.c: As a base case, it uses the concept x ^ 0 = 1, and to define
the recursion, it uses the concept x ^ y = x * (x ^ (y - 1))

5-sqrt_recursion.c: I had to research this a bit, because I had no idea how to
calculate the sqrt of a number in a recursive way. In retrospect, the only
thing I was missing is that I could use another function for the recursion.
In this function, an efficient method is used where starting from n itself as
the initial guess, we check if it is the sqrt of n, then the next guess is:
   	 (prev_guess + (n / prev_guess)) / 2
Then, recursively we check if this new guess is the sqrt of n, and so on. If
at any point the guess squared is less than n, that means that n is not a
perfect square and we return -1.
I could also have used a more slower approach by starting with n as the initial
guess and decrementing the guess by 1 each time until the guess squared is equal
to or greater than n. If less than, it would mean n is not a perfect square.

6-is_prime.c: The function behaves just like a loop, with each recursion, the
number is checked for divisibility with the previous checked number + 1. I am
pretty certain that there is a much more efficient way to go about this than
incrementing by 1. I just have to find a pattern within prime numbers.

100-is_palindrome.c: The function passes the string to check_palindrome which
expects 2 arguments, a pointer to the first character, and a pointer to the last
 character. Then, by each recursion, move 'start' one memory area forward, and
 'end' one memory area backwards until the address stored in 'start' equals or
 exceeds the address stored in 'end' which would mean that we have reached the
 middle of the string with out finding an inequality, then the string is a
 palindrome.

101-wild_cmp.c: Honestly, this one is better understood by just reading the code
but, I will try to explain to my ability. I took my inspiration from a
reference on stackoverflow to a oneliner code for globbing wildcards. Basically,
we are trying to compare the 'equality' of 2 strings, but one of them may have
the '*' wildcard character inside which may represent 0 or more characters.
    So for example: "hello" and "he*o" are equal, so are "hello" and "he**llo"
Let's first ignore the existence of the wildcard (one can only dream), then,
the simpest case we could receive is if one of the strings is empty. Then we
return !(length of the other string). If this length is 0, we return 1 (the !),
if not, that would mean one string is longer than the other, and we return 0.
This is our base case. Then, if the first characters of the strings are the
same, we recursively call the function and pass the incremented strings (to
check the next character) and so on. The only complication left here, is the '*'
which could represent 0, 1, or multiple characters. Based on this, if we
encounter '*', we account for two scenarios. 1. The * represents 0 characters.
or 2. The * represents 1 character or more. It is one of the two scenarios. So,
our recursive call becomes:
    	      return (wildcmp(s1, s2 + 1) || (*s1 && (wildcmp(s1 + 1, s2))));
	                    ^             or              ^
			    |                             |
		The * represents 0 characters       The * represents 1 character
		so we jump it.                      so we pass one char from s1.
