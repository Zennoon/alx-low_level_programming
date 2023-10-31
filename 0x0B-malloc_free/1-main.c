#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Duplicates a given string using the _strdup function
 * Return: 0 if success, 1 if failure
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
