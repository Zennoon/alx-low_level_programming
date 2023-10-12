#include "main.h"

int count_digit(int);
int calc_power(int, int);

/**
 * print_number - Prints a number using only _putchar to stdout
 * @n: The number to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int digits;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	digits = count_digit(n);
	while (digits > 0)
	{
		int curr_digit;

		curr_digit = (n / (calc_power(10, --digits))) % 10;
		_putchar(curr_digit + '0');
	}
}

/**
 * count_digit - Returns the number of digits in a number
 * @n: The integer whose digits are counted
 *
 * Return: The number of digits of n
 */
int count_digit(int n)
{
	int tmp;
	int count;

	tmp = n;
	if (tmp == 0)
	{
		count = 1;
	}
	else
	{
		count = 0;
	}
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	return (count);
}

/**
 * calc_power - Computes and returns result of exponentiation
 * @base: The base of the operation
 * @exp: The exponent of the operation
 * Return: base ** exp
 */
int calc_power(int base, int exp)
{
	int result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp--;
	}
	return (result);
}
