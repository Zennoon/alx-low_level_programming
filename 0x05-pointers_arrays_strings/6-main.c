#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 *
 * Description: Uses the rev_string to reverse a given string
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";
	char s3[] = "Hiya";

	puts2(s1);
	puts2(s2);
	puts2(s3);
	printf("%s\n%s\n%s\n", s1, s2, s3);
	return (0);
}
