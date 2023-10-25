#include "main.h"

/**
 * _puts_recursion - Prints a string to stdout recursively
 * @s: The string to be printed
 *
 * Description: Uses the fact that strings in C are terminated by '\0' as a base
 * case, and prints each character recursively until that '\0' is reached
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
