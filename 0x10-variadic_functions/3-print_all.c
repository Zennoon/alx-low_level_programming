#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints given args based on a given format string
 * @format: The format string that dictates number and type of args to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char dt_types[] = "cifs";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (dt_types[j])
		{
			if (format[i] == dt_types[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(ap, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(ap, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(ap, double)), c = 1;
			break;
		case 's':
			str = va_arg(ap, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(ap);
}
