#include <stdio.h>

/**
 * print_array - Prints a given number of elements from a given integer array
 * @a: The array of integers whose elements are being printed
 * @n: The number of elements of a to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
