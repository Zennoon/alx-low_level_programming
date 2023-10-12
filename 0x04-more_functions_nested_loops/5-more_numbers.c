#include "main.h"

/**
 * more_numbers - Prints numbers from 0 - 14 as characters 10 times
 *
 * Description: The function uses the integer division and modulo operations
 * to deal with numbers greater than or equal to 10. The integer division gets
 * the tens digit and the modulo operator gets the ones digit
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		int j;

		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
