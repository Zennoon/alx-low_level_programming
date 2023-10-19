#include "main.h"

/**
 * reverse_array - Reverses an array of given size
 * @a: The array to be reversed
 * @n: The length of a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int rev_a[n];
	int *ptr;
	int i;

	ptr = (a + n - 1);
	for (i = 0; i < n; i++)
	{
		rev_a[i] = *ptr;
		ptr--;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = rev_a[i];
	}
}
