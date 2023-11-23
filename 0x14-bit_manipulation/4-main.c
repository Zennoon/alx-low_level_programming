#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Clears (sets to zero) the bit at a given index of the binary
 * form of a number using clear_bit
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 98;

	clear_bit(&n, 1);
	printf("%lu\n", n);
	return (0);
}
