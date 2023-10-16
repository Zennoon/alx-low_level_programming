#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the function _strlen to find the length of strings
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s1 = "Hello";
	char *s2 = "World!";
	char *s3 = "Hiya";

	printf("s1: %d\ns2: %d\ns3: %d\n",
	       _strlen(s1),
	       _strlen(s2),
	       _strlen(s3)
		);
	return (0);
}
