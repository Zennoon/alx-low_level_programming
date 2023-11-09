#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints the strings passed as optional arguments separated
 * @separator: The separator to be printed between the strings
 * @n: The number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *curr_arg;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator != NULL)
		{
			printf("%s", separator);
		}
		curr_arg = va_arg(ap, char *);
		if (curr_arg != NULL)
		{
			printf("%s", curr_arg);
		}
		else
		{
			printf("(nil)");
		}
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_strings_2 - Does the same thing as print_strings in another way
 * @separator: The string printed between the arguments
 * @n: The number of optional arguments passes
 * Description: Thsi implementation uses one argument pointer to check if an
 * argument is NULL, and another one to print the argument
 * Return: void
 */
void print_strings_2(const char *separator, const unsigned int n, ...)
{
	va_list ap, aq;
	unsigned int i;

	va_start(ap, n);
	va_start(aq, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator != NULL)
		{
			printf("%s", separator);
		}
		if (va_arg(ap, char *) != NULL)
		{
			printf("%s", va_arg(aq, char *));
		}
		else
		{
			printf("(nil)");
			va_arg(aq, char *);
		}
	}
	va_end(ap);
	va_end(aq);
	printf("\n");
}
