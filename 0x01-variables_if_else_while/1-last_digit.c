#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point of the program
 *
 * Description: The function generates a random number, then gets its last
 * digit (which is the remainder when divided by 10). Then, it uses an
 * if...else if...else statement to print a message accordingly. There is a
 * catch though, if the number is negative, the modulo operator will return
 * a negative number, which can't really be a digit. I could have corrected it
 * using the unary + operator, but the examples shown in the project show
 * negative numbers, so I have chosen to leave it as such
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
