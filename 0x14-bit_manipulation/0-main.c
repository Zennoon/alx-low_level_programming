#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses binary_to_uint function to get the decimal representation
 * of a binary number stored as a string
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned int dec;
	char *b = NULL;

	dec = binary_to_uint(b);
	printf("dec = %u\n", dec);
	return (0);
}
