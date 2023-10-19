#include "main.h"

/**
 * get_digits - Counts and returns the number of digits in a number
 * @n: The integer whose digits are counted
 *
 * Return: The number of digits of n
 */
int get_digits(int n)
{
	int count;

	count = 0;
	do {
		count++;
		n /= 10;
	} while (n != 0);
	return (count);
}

/**
 * calc_power - Calculates and returns one number to the power of another
 * @base: The base
 * @exp: The exponent
 *
 * Return: base ^ exp or base ** exp
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

/**
 * print_number - Prints an integer using only _putchar
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int digits;
        int i;
        int curr_digit;
	
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	digits = get_digits(n);
	for (i = digits - 1; i >= 0; i--)
	{
		curr_digit = (n / calc_power(10, i)) % 10;
		_putchar('0' + curr_digit);
	}
}
