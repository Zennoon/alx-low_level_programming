#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the program
 *
 * Description: Uses the _strstr function to check to exisitence of one string
 * inside another
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
