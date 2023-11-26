#include <stdio.h>
#include "main.h"

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

	if (index > 63 || index < 0)
	{
		return (-1);
	}
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
