#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses string_nconcat to concatenate two strings, 1 fully, and
 * 1 partially using dynamic memory allocation
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", NULL, 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
