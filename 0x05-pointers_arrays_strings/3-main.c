#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 *
 * Description: Uses the _puts function to print a specified string followed by
 * a new line to stdout
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";
	char *s3 = "Hiya";

	_puts(s1);
	_puts(s2);
	_puts(s3);
	return (0);
}
