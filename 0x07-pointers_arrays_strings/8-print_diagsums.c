#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Print the sums of the two diagonals of a square matrix
 * @a: The array whose diagonals are getting added
 * @size: Size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int sum_l_r, sum_r_l, i;

	sum_l_r = 0;
	for (i = 0; i < size; i++)
	{
		sum_l_r += *(a + ((i * size) + i));
	}
	sum_r_l = 0;
	for (i = 0; i < size; i++)
	{
		sum_r_l += *(a + ((size * i) + (size - 1 - i)));
	}
	printf("%d, %d\n", sum_l_r, sum_r_l);
}
