#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_integer - Prints an int arg that a given argument pointer points to
 * @ap: The argument pointer of another function which points to the int to
 * be printed
 *
 * Return: void
 */
void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_char - Prints a character arg that a given argument pointer points to
 * @ap: The argument pointer of another function which points to the char
 * to be printed
 *
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - Prints a float arg that a given argument pointer points to
 * @ap: The argument pointer of another function which points to the float to
 * be printed
 *
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - Prints a string arg that a given argument pointer points to
 * @ap: The argument pointer of another function which points to the string to
 * be printed
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s != NULL)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
	}
}

/**
 * print_all - Prints the arguments passed based on a format string
 * @format: The format according to which the args are printed
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	const char *ptr;
	va_list ap;
	int i;
	dts types[] = {
		{'i', print_integer},
		{'c', print_char},
		{'f', print_float},
		{'s', print_string}
	};

	ptr = format;
	va_start(ap, format);
	if (format != NULL)
	{
		while (*ptr)
		{
			i = 0;
			while (i < 4)
			{
				if (types[i].symbol == *ptr)
				{
					void (*func)(va_list);

					func = types[i].f;
					func(ap);
					break;
				}
				i++;
			}
			ptr++;
		}
		printf("\n");
	}
}
