#include "main.h"

void print_table_line(short num2, short product);

/**
 * print_times_table - Prints a times table of a given size
 * @n: The size of the times table to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		short num1 = 0;

		while (num1 <= n)
		{
			short num2 = 0;

			while (num2 <= n)
			{
				short product = num1 * num2;

				print_table_line(num2, product);
				if (num2 == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
				}
				num2++;
			}
			num1++;
		}
	}
}

/**
 * print_table_line - Prints a single line of the times table
 * @num2: Corresponds to num2 in print_times_table
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
		_putchar(' ');
		_putchar(product + '0');
	}
	else if (product < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar((product / 10) + '0');
		_putchar((product % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar((product / 100) + '0');
		_putchar(((product % 100) / 10) + '0');
		_putchar((product % 10) + '0');
	}
}
