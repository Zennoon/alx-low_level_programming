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

	puts_half(s1);
	puts_half(s2);
	puts_half(s3);
	return (0);
}
