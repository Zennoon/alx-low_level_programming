#include "main.h" /* needed for _putchar() */

/**
 * print_numbers - Prints the digits (0-9) as characters
 *
 * Return: void
 */
void print_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
