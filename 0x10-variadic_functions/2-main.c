#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the variadic function print_strings to print the strings
 * passed as optional arguments, separated by a given separator
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_strings(", ", 3, "Jay", NULL, "Julien");
	print_strings_2(", ", 3, "Jay", NULL, "Julien");
	return (0);
}
