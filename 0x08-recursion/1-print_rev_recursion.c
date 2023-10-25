#include "main.h"

/**
 * _print_rev_recursion - Prints a given string in reverse recursively
 * @s: The function to be printed in reverse
 *
 * Description: The function recursively reaches the end of the string ('\0'),
 * then starts printing one character at a time upwards from there
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
