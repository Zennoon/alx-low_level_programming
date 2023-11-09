#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the sum_them_all function to add the arguments (except the
 * first one, which is a required argument) passed to the function and prints the
 * sum
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%d\n", sum_them_all(4, 23, 98, 12, 17));
	printf("%d\n", sum_them_all(1, 23));
	printf("%d\n", sum_them_all(0));
	return (0);
}
