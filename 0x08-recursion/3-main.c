#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Calculates and prints the factorial of a number using the
 * recursively defined factorial function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-10);
	printf("%d\n", r);
	return (0);
}
