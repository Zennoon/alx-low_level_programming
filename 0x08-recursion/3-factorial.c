#include "main.h"

/**
 * factorial - Recursively Computes and returns the factorial of a number
 * @n: The integer whose factorial is calculated
 *
 *
 * Return: n! if n >= 0, -1 otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
