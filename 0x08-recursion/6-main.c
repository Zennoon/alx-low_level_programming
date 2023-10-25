#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Checks if a number is prime or not using is_prime_number which
 * in turn uses check_prime, a recursively defined function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = is_prime_number(184913);
	printf("%d\n", r);
	return (0);
}
