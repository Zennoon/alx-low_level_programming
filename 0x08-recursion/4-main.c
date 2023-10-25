#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Computes one int raised to another using the recursively
 * defined _pow_recursion function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _pow_recursion(1, 10);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(5, -1);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}
