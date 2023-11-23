#include <stdio.h>
#include "main.h"

/**
 * calc_power - Performs exponentiation
 * @base: The base
 * @exp: The exponent
 *
 * Return: base ** exp
 */
unsigned long calc_power(unsigned long base, unsigned int exp)
{
	unsigned int result = 1;

	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}

/**
 * get_bit - Returns the value of the bit at a given index of a num in binary
 * @n: A number in base 10 (Decimal)
 * @index: The index of the bit whose value is desired (counting up from the
 * least significant bit) index starting from 0
 * Return: void
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int val = 0;

	while (n > 0)
	{
		if (i == index)
		{
			if (n % 2 == 0)
			{
				val = 0;
			}
			else
			{
				val = 1;
			}
			break;
		}
		n /= 2;
		i++;
	}
	return (val);
}


/**
 * set_bit - Sets value of bit at a given index of a num to 1 if not already
 * @n: A pointer to the number whose bits are manipulated
 * @index: The index at which the bit is set to 1
 *
 * Return: 1 if the operation worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (get_bit(*n, index) == 0)
	{
		*n += calc_power(2, index);
	}
	return (1);
}
