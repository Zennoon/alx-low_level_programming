#include "main.h"

/**
 * print_sign - Checks whether a given number is positive, negative, or zero
 * @n: The integer to be checked for sign
 *
 * Description: The function uses if else statements to check the sign of a
 * number (using _putchar) and both prints the sign, and returns an integer
 * Return: 1 if i is positive, 0 if i is zero, and -1 if i is negative
 */
int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	else {
		sign = 0;
		_putchar('0');
	}
	return (sign);
}
