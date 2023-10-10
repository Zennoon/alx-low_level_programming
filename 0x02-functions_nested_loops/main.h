#ifndef HEADER_EXISTS
#define HEADER_EXISTS

#include <stdio.h>

/**
 * _putchar - Prints a single character to the standard output
 * @c: The character to be printed
 *
 * Return: void
 */
void _putchar(char c)
{
	putchar(c);
}

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
