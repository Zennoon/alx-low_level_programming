#include <stdio.h>
#include "function_pointers.h"

/**
 * print_as_is - Prints the given name as is
 * @name: given namew to print
 *
 * Return: void
 */
void print_as_is(char *name)
{
	printf("%s\n", name);
}

/**
 * print_uppercase - Given a name, prints it all in uppercase
 * @name: Given name to print
 *
 * Return: void
 */
void print_uppercase(char *name)
{
	char *ptr;

	ptr = name;
	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			_putchar(*ptr - 32);
		}
		else
		{
			_putchar(*ptr);
		}
		ptr++;
	}
	_putchar('\n');
}

/**
 * main - The entry point of the program
 *
 * Description: Uses print_name to print a given name in different ways by
 * altering the printing function using a function pointer argument
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *name = "Yunus";

	print_name(name, print_as_is);
	print_name(name, print_uppercase);
	return (0);
}
