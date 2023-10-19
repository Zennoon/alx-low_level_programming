#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Encodes a string uses leet -> 1337 format, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
