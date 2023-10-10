#include "main.h"

void print_table_line(short, short, short);

/**
 * times_table - Prints the 9 times table
 *
 * Description: The function uses nested loops to print the 9 times table.
 * It also aligns the values to the right by checking if a value is less
 * than or equal to 10 (2 digits) or not and giving more or less space
 * accordingly
 * Return: void
 */
void times_table(void)
{
	short num1 = 0;

	while (num1 < 10)
	{
		short num2 = 0;

		num2 = 0;
		while (num2 < 10)
		{
			short product;

			product = num1 * num2;
			print_table_line(num2, product);
			num2++;
		}
		num1++;
	}
}

/**
 * print_table_line - Prints a single line of the times table
 * @num2: Corresponds to num2 in times_table
 * @product: num1 * num2
 *
 * Return: void
 */
void print_table_line(short num2, short product)
{
	if (num2 == 0)
	{
		_putchar(0 + '0');
	}
	else if (product < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(product + '0');
	}
	else
	{
		_putchar(' ');
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
	}
	if (num2 == 9)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(',');
	}
}
