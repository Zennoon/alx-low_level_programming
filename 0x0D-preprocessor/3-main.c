#include <stdio.h>
#include "3-function_like_macro.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the ABS function like macro to compute the absolute value
 * of given numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = ABS(-98) * 10;
	j = ABS((-34) + 5) * 2;
	printf("%d\n%d\n", i, j);
	return (0);
}
