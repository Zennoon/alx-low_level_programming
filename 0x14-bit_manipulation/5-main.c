#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses flip_bits to get the number of bits that would need to be
 * flipped to convert one number to another
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int n;

	n = flip_bits(1024, 1025);
	printf("%u\n", n);
	return (0);
}
