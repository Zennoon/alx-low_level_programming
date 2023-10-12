#include "main.h"

/**
 * print_square - Prints a square made of '#'s of given size
 * @size: The size of the square (The number of lines, and the number of
 * '#'s in each line)
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i < size)
		{
			int j;

			j = size;
			while (j--)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
