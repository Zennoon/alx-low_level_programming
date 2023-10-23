#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - Prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of memory to print
 *
 * Return: void
 */
void simple_print_buffer(char *buffer, int size)
{
	int i;

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
 * Description: Fills a buffer with a given character using the _memset
 * function and prints the updated string / buffer
 * Return: Always 0 (Success)
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-----------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
