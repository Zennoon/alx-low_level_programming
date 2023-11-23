#include <stdio.h>
#include "main.h"

/**
 * get_power_of_2 - Gets the greatest power of 2 that is less than a number
 * @n: The number whose power of 2 neighbor is returned
 *
 * Return: The greatest power of 2 that is less than or equal to n
 */
unsigned long get_power_of_2(unsigned long n)
{
	unsigned long lim = 1;

	while (lim <= n)
	{
		lim *= 2;
	}
	return (lim >> 1);
}

/**
 * print_binary - Prints the binary representation of a given number
 * @n: A number in base 10 (Decimal)
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int lim = get_power_of_2(n);
	long int diff;

	while (lim > 0)
	{
		diff = n - lim;
		if (diff < 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
			n = n - lim;
		}
		lim = lim >> 1;
	}
}
