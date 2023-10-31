#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the str_concat function to concatenate two string using
 * dynamic memory allocation which will be freed in this function
 * Return: 0 if the memory is allocated properly, 1 otherwise
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
