#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Computes and prints the product of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int mul1 = mul(2, 3);
	int mul2 = mul(24, -3);
	int mul3 = mul(98, 1024);

	printf("%d, %d, %d\n", mul1, mul2, mul3);
	return (0);
}
