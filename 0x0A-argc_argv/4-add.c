#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (1D array of the command line arguments passed)
 *
 * Description: Sums the command line arguments (if they are numbers) after
 * turning them into a number using atoi function, or returns 1 if one of the
 * arguments is not a number in string format
 * Return: 0 if all the arguments (besides first one) are digits, 1 otherwise
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '0' && !atoi(argv[i])) /* Not a digit */
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
