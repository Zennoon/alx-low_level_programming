#include <stdio.h>
#include "main.h"

/**
 * print_buffer - Prints a given number of bytes of a given string
 * @b: The buffer / string which is getting printed
 * @size: The number of bytes of b to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		char *hex_ptr, *char_ptr;
		int index, i, j;

		hex_ptr = b;
		char_ptr = b;
		index = 0;
		i = 0;
		j = 0;
		while (index < size)
		{
			int lim;

			printf("%x: ", hex_ptr);
			lim = index + 10;
			while (i < lim)
			{
				if (i < size)
				{
					printf("%02x", *hex_ptr);
					hex_ptr++;
				}
				else
				{
					printf("  ");
				}
				if (i % 2)
				{
					printf(" ");
				}
				i++;
			}
			while (j < lim && j < size)
			{
				if (*char_ptr >= 32 && *char_ptr <= 126)
				{
					printf("%c", *char_ptr);
				}
				else
				{
					printf(".");
					}
				char_ptr++;
				j++;
			}
			printf("\n");
			index += 10;
			}
	}
}
