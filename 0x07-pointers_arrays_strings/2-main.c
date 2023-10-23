#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses _strchr to find an instance of a character in a string
 * and return a pointer to it if it exists
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "Hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
