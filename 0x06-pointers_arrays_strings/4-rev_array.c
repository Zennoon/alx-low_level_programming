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
	int *ptr1;
	int *ptr2;
	int i;

	ptr1 = a;
	ptr2 = a + (n - 1);
	for (i = 0; i < (n / 2); i++)
	{
		int temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1++;
		ptr2--;
	}
}
