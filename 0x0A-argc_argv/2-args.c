#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 * @argc: Argument count
 * @argv: Argument vector (1D array of the command line arguments passed)
 *
 * Description: Prints all of the arguments (including the program name) passed
 * when the program is run
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
