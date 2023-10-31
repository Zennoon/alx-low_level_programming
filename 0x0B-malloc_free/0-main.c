#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * simple_print_buffer - Prints a given number of elements of a given array
 * @arr: The array whose elements are printed
 * @n: The number of elements of arr to print
 *
 * return: void
 */
void simple_print_buffer(char *arr, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", arr[i]);
	}
	printf("\n");
}

/**
 * main - The entry point of the program
 *
 * Description: Creates a char array of given size and character using
 * create_array which uses malloc
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *buffer;

	buffer = create_array(98, 'H');
	if (buffer == NULL)
	{
		printf("Failed to allocate memory");
		return (0);
	}
	simple_print_buffer(buffer, 98);
	free(buffer);
	return (0);
}
