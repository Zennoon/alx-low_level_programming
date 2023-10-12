#include "main.h"

/**
 * print_triangle - Prints a triangle of a given size made of '#'s
 * @size: The size of the triangle
 *
 * Description: The number of hashes increases from 1 - size as the line number
 * increases. So, I have used the loop counter + 1 to designate the number of
 * hashes in each line. And the number of characters in each line is always
 * equal to size. Some of these are hashes and the others are spaces. So,
 * the number of spaces is equal to size - the number of hashes.
 * Return: void
 */
void print_triangle(int size)
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
			int hashes;
			int spaces;

			hashes = i + 1;
			spaces = size - hashes;
			while (spaces)
			{
				_putchar(' ');
				spaces--;
			}
			while (hashes)
			{
				_putchar('#');
				hashes--;
			}
			_putchar('\n');
			i++;
		}
	}
}
