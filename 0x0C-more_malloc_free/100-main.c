#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * simple_print_buffer - Prints buffer in hexa
 * @buffer: The address of memory to print
 * @size: The size of memory to print
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
 * Description: Uses the _realloc function to reallocate the
 * amount of memory previously allocated
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *p;

	p = malloc(sizeof(char) * 10);
	p[0] = 'a';
	p[1] = 'b';
	p[2] = 'c';
	p = _realloc(p, sizeof(char) * 10, 20);
	if (p == NULL)
	{
		printf("NULL\n");
		return (1);
	}
	simple_print_buffer(p, 20);
	free(p);
	return (0);
}
