#ifndef HEADER_EXISTS
#define HEADER_EXISTS

#include <stdio.h>

/**
 * print_alphabet - Prints the entire alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

#endif
