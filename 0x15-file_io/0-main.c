#include "main.h"

/**
 * main - The entry point of the program
 * @ac: Argument Count
 * @av: Argument Vector
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 10000);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
