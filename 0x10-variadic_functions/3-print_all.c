#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints the optional arguments based on a given format string
 * @format: Format string that dictates the number and type of args to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *str;
	int is_found;
	int i;
	va_list ap;

	i = 0;
	va_start(ap, format);
	while (format != NULL && format[i])
	{
		is_found = 0;
		switch (format[i])
		{
		case 'c':
			is_found = 1;
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			is_found = 1;
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			is_found = 1;
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			is_found = 1;
			str = va_arg(ap, char *);
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
			break;
		}
		i++;
		if (format[i] && is_found)
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
