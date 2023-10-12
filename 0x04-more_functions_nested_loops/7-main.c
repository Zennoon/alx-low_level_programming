#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Prints a diagonal line consisiting of '\' of given size
 * using the print_diagonal function
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_diagonal(6);
	print_diagonal(0);
	print_diagonal(-3);
	print_diagonal(10);
	return (0);
}
