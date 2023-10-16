#include "main.h"

/**
 * _puts - Prints a specified string to the stdout, followed by a newline
 * @str: The string to be printed
 *
 * Description: Uses pointer incrementing to print the value at the address
 * held by a pointer one by one until a null terminator is encountered
 * Return: void
 */
void _puts(char *str)
{
	short i;

	i = 0;
	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
