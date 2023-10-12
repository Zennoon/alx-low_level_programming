#include "main.h"
#include <stdio.h>

int count_digits(int);
int power(int, int);

/**
 * print_number - Prints a number to stdout using only _putchar
 * @n: The number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	int digits;

	digits = count_digits(n);
	while (digits)
	{
		int curr_digit;

		curr_digit = (n / (power(10, (digits - 1)))) % 10;
		_putchar(curr_digit + '0');
		digits--;
	}
	_putchar('\n');
}

/**
 * count_digits - Returns the number of digits that a given number has
 * @n: The number whose digits are being counted
 *
 * Return: The number of digits of n
 */
int count_digits(int n)
{
	int tmp, count;

	tmp = n;
	count = 0;
	if (tmp == 0)
	{
		count++;
	}
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	return (count);
}

/**
 * power - calculates the exponentiation of a base to an exponent
 * @base: The base of the exponentiation
 * @exp: The exponent
 *
 * Description: C does not have a builtin exponentiation operator, since it
 * isn't really a common operation when it comes to machines, so I implemented
 * it like so.
 * Return: base ** exp
 */
int power(int base, int exp)
{
	int i, result;

	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}
