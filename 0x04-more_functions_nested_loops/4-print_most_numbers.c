#include "main.h"

/**
 * print_most_numbers - Prints the characters '0 - '9' except '2' and '4'
 *
 * Return: void
 */
void print_most_numbers(void)
{
	char c;
	c = '0';
	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
