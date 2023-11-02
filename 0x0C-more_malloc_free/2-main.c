#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * simple_print_buffer - Prints buffer in hexa
 * @buffer: The address of the memory to print
 * @size: The size of the memory to print
 *
 * Return: void
 */
void simple_print_buffer(char *buffer, unsigned int size)
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
 * Description: Uses _calloc to allocate memory for an array of a given amount
 * of elements, each having a given amount of bytes
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *a;

	a = _calloc(98, sizeof(char));
	strcpy(a, "Best");
	strcpy(a + 4, " School! :)\n");
	a[97] = '!';
	simple_print_buffer(a, 98);
	free(a);
	return (0);
}
