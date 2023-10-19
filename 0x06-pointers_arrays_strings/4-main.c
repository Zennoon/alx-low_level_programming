#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints all elements of an array separated by commas
 * @a: The array whose elements are printed
 * @n: The length (number of elements) of a
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}


/**
 * main - The entry point of the program
 *
 * Description: Reverses a given array using the reverse_array function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
