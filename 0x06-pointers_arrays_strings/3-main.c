#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Compares two strings and prints an appropriate int accordingly
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}
