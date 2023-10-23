#include <stdio.h>
#include "main.h"

/**
 * main -The entry point of the program
 *
 * Description: Uses the strpbrk function to find the first occurence in one
 * string of any character in another string
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "ord";
	char *t;

	t = _strpbrk(s, f);
	printf("%s\n", t);
	return (0);
}
