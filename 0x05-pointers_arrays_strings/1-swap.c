#include "main.h" /* Not really needed */

/**
 * swap_int - Swaps the values of two integers
 * @a: The pointer to integer 1
 * @b: The pointer to integer 2
 *
 * Description: Accepts two pointers of integer types, and swaps the values
 * held in the variables the pointers point to
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
