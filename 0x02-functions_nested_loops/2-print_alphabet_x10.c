#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *
 * Description: The function uses _putchar with two while loops
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	short num;

	num = 0;
	while (num < 10)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		num++;
	}
}
