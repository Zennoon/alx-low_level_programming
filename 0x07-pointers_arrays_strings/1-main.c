#include <stdio.h>
#include "main.h"

/**
 * simple_print_buffer - Prints some bytes of a given string in hexa
 * @buffer: The string to be printed
 * @n: The number of bytes to print from buffer
 *
 * Return: void
 */
void simple_print_buffer(char *buffer, int n)
{
	int i;

	i = 0;
	while (i < n)
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
 * main - The entry point of the function
 *
 * Dscription: Copies the content of one memory area to another and prints
 * the destination
 * Return: Always 0 (Success)
 */
int main(void)
{
	char buffer[98] = {0x00};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	simple_print_buffer(buffer, 98);
	_memcpy(buffer + 50, buffer2, 12);
	printf("-----------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
