#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 * @argc: Argument count
 * @argv: Argument vector (1D array of the command line arguments passed when
 * the program is executed)
 *
 * Description: The task was to print the number of arguments passed into the
 * program (not into the command line) when the program is run, naturally, this
 * wouldn't include the program name itself, so we have to decrement argc by 1
 * because argc counts the program name as well
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((__unused__)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
