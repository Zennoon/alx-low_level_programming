#include <stdio.h>
#include "main.h"

/**
 * main - The entry point of the function
 *
 * Description: Uses set_string to set the value of a pointer to a char
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s0[] = "Bob Dylan";
	char s1[] = "Robert Allen";

	printf("%s, %s\n", s0, s1);
	set_string(&(*s1), s0);
	printf("%s, %s\n", s0, s1);
	return (0);
}
