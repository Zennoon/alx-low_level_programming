#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Finds and prints the sqrt of an integer, or prints -1 if the
 * integer is not a perfect square or is negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(1);
	printf("%d\n", r);
	r = _sqrt_recursion(1024);
	printf("%d\n", r);
	r = _sqrt_recursion(16777216);
	printf("%d\n", r);
	r = _sqrt_recursion(17);
	printf("%d\n", r);
	r = _sqrt_recursion(25);
	printf("%d\n", r);
	r = _sqrt_recursion(-1);
	printf("%d\n", r);
	return (0);
}
