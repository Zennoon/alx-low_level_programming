#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 * @argc: The number of command line arguments passed when the program is run
 * @argv: An array of the command line arguments as strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
