#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of the given optional args
 * @n: The number of optional args
 *
 * Description: Uses the macros in stdarg.h to iterate through the optional
 * arguments and sum them
 * Return: Sum of the optional arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
