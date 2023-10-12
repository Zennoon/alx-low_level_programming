#include "main.h"

/**
 * print_line - Prints a line of given length using '_'
 * @n: The number of '_'s to print (the length of the line)
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
