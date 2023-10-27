#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (a 1D array of the command line arguments)
 *
 * Description; Calculates the number of coins it would take to make change
 * for an amount of money in cents given from the command line.
 * Return: 0 (Success) if given exactly 1 argument (besides the program name)
 * from the command line, 1 (failure) otherwise
 */

int main(int argc, char **argv)
{
	int cents, coins, i;
	int coin_vals[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coins = 0;

	i = 0;
	while (i < 5)
	{
		if (cents / coin_vals[i] > 0)
		{
			coins += cents / coin_vals[i];
			cents %= coin_vals[i];
		}
		i++;
	}
	printf("%d\n", coins);
	return (0);
}
