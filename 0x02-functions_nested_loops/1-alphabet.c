#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase once
 *
 * Description: The function uses the _putchar function which is defined in
 * _putchar.c and has a prototype declaration in main.h
 * Return: Always 0 (Success)
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
