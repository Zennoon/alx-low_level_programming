#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - Checks if a given number is equal to 98
 * @n: The number to check
 *
 * Return: 0 if n != 98, another number otherwise
 */
int is_98(int n)
{
	return (n == 98);
}

/**
 * is_strictly_positive - Checks if a given number is greater than 0
 * @n: The number to check
 *
 * Return: 0 if n <= 0, another number otherwise
 */
int is_strictly_positive(int n)
{
	return (n > 0);
}

/**
 * abs_is_98 - Checks if the absolute value of a number is equal to 98
 * @n: The number to check
 *
 * Return: 0 if |n| != 98, another number otherwise
 */
int abs_is_98(int n)
{
	return (n == 98 || -n == 98);
}

/**
 * main - The entry point of the program
 *
 * Description: Uses int_index to find the first index of an array that returns
 * non 0 in a given callback function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[5] = {23, -98, 12, 98, 402};
	int index;

	index = int_index(arr, 5, is_98);
	printf("%d\n", index);
	index = int_index(arr, 5, is_strictly_positive);
	printf("%d\n", index);
	index = int_index(arr, 5, abs_is_98);
	printf("%d\n", index);
	return (98);
}
