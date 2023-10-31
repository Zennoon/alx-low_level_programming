#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The entry point of the program
 * @ac: Argument Count
 * @av: Argument Vector (a 1D array of command line arguments as strings)
 *
 * Description: Concatenates the given command line arguments using argstostr
 * which uses dynamic memory allocation
 * Return: 0 if the concatenation works properly, 1 otherwise
 */
int main(int ac, char **av)
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
