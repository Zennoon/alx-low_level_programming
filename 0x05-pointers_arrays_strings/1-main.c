#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 *
 * Description: Uses the function swap_int to swap the values of two variables
 * by using two pointers storing their addresses
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 98;
	int num2 = 402;

	printf("Before: num1 = %d, num2 = %d\n", num1, num2);
	swap_int(&num1, &num2);
	printf("After: num1 = %d, num2 = %d\n", num1, num2);
	return (0);
}
