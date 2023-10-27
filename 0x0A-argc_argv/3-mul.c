#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (1D array of the command line arguments passed)
 *
 * Description: Multiplies two numbers passed as arguments (if available) and
 * prints the product
 * Return: 0 if successful (operands available), 1 if not
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
