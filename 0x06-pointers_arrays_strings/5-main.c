#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Converts each lowercase letter in a string to uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
