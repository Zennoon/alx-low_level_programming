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
 * flip_bits - Returns number of flips needed to convert one given num to other
 * @n: A number in base 10 (Decimal)
 * @m: Second number in base 10
 *
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count_1 = 0;
	unsigned long int lim = get_power_of_2(x);
	long int diff;

	while (lim > 0)
	{
		diff = x - lim;
		if (diff >= 0)
		{
			count_1 += 1;
			x = x - lim;
		}
		lim = lim >> 1;
	}
	return (count_1);
}
