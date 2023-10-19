#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Encodes/Decodes a given string with ROT13 encoding and prints
 * the encoded/decoded string
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("----------------------------------------------\n");
	printf("%s", s);
	printf("----------------------------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("----------------------------------------------\n");
	printf("%s", s);
	printf("----------------------------------------------\n");
	return (0);
}
