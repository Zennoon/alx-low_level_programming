#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a given number
 * @n: The integer whose last digit is to be printed, and returned
 *
 * Description: The function computes the remainder when n is divided by 10
 * This gives us the last digit of the number. Then, the absolute value of
 * that last digit is printed and returned
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
