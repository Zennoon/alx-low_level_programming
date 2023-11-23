#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the get_bit function to get the value of a bit at specific
 * index in the binary representaion of a decimal number
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%d\n", get_bit(0, 1));
	return (0);
}
