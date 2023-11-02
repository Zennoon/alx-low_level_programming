#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: The address of the memory to print
 * @size: The size of the memory to print
 *
 * Return: void
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - The entry point of the program
 *
 * Description: Uses arry_range to generate an integer array containing all
 * the integers between 2 numbers (inclusive).
 * Return: Always 0 (Success)
 */
int main(void)
{
	int *a;

	a = array_range(0, 10);
	simple_print_buffer(a, 11);
	free(a);
	return (0);
}
