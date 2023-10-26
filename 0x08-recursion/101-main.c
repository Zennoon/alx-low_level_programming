#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses wildcmp function to compare 2 strings, 1 contains the *
 * wildcard character which represents 0 or more characters
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = wildcmp("main.c", "*.c");
	printf("%d\n", r);
	return (0);
}
