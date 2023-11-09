#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the variadic function print_numbers to print the numbers
 * passed as arguments, separated by a given string
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_numbers(", ", 5, 5, 6, 7, 8, 9);
	return (0);
}
