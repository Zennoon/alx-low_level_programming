#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - The entry point of the program
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: 0 if successful, 98 || 99 || 100 otherwise
 */
int main(int ac, char *av[])
{
	char *ops;
	int (*op_func)(int, int);
	int result;

	ops = "+-*/%";
	if (ac != 4)
	{
		printf("Error\n");
		exit(EXIT_WRONG_NUM_ARGS);
	}
	if (strlen(av[2]) != 1 || strchr(ops, *av[2]) == NULL)
	{
		printf("Error\n");
		exit(EXIT_INVALID_OP);
	}
	if ((*av[2] == '/' || *av[2] == '%') && *av[3] == '0')
	{
		printf("Error\n");
		exit(EXIT_DIV_BY_0);
	}
	op_func = get_op_func(av[2]);
	result = op_func(atoi(av[1]), atoi(av[3]));
	printf("%d\n", result);
	return (0);
}
