#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Sets the value of the bit at a given index in the binary rep
 * of a number to 1 using set_bit function
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 98;
	set_bit(&n, 0);
	printf("%lu\n", n);
        return (0);
}
