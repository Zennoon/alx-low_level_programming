#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Prints the sums of the two diagonals of a square matrix of ints
 * using the print_diagsums function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c5[5][5] = {
		{0, 1, 5, 12124, 1234},
		{10, 11, 12, 123521, 12512},
		{1000, 101, 102, 12545, 214543435},
		{100, 1012451, 11102, 12545, 214543435},
		{10, 12401, 10452, 11542545, 1214543435},
	};
	print_diagsums((int *)c5, 5);
	return (0);
}
