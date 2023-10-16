#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the _strcpy function to copy a string an returna pointer
 * at the new string
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s1 = "Hello, world";
	char s2[98];

	_strcpy(s2, s1);
	printf("%s, %s\n", s1, s2);
	return (0);
}
