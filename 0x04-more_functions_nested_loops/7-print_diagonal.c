#include "main.h"

/**
 * print_diagonal - Prints a diagonal line made of '\' of a given length
 * @n: The number of '\'s to print (the length of the diagonal)
 *
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i < n)
		{
			int j;

			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
