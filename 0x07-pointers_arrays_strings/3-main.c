#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Counts the number of bytes in the initial segment of a string
 * that consist only of characters of another string using _strspn
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
