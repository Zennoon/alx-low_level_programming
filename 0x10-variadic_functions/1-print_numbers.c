#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints the numbers given as optional arguments separated
 * @separator: The separator to be printed between the numbers
 * @n: The number of optional arguments the function has received
 *
 * Return: void
 */
void print_numbers(const char *separator, int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (i && separator != NULL)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
