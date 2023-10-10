#include <stdio.h>

/**
 * print_to_98 - Prints all the natural numbers from a given number to 98
 * @n: The starting point of printing
 *
 * Description: If n > 98, decrement the counter till we reach 98. Otherwise
 * increment the counter until we reach 98
 * Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
