#include "main.h"

int get_length(char *);

/**
 * print_rev - Prints a given string backwards
 * @s: The string to be printed backwards
 *
 * Description: First, we get the length of s, then we declare a pointer that
 * points at the last character of the string, then we decrement the pointer
 * until we reach the beginning
 * Return: void
 */
void print_rev(char *s)
{
	int len;
	int i;
	char *ptr;

	len = get_length(s);
	i = len - 1;
	ptr = s + i; /**
		      * ptr now holds the address at the last character
		      *	of the string
		      */
	while (i >= 0)
	{
		_putchar(*ptr);
		ptr--;
		i--;
	}
	_putchar('\n');
}

/**
 * get_length - Returns the length of a given null terminated string
 * @s: The string the length of which is computed
 *
 * Return: The length of s
 */
int get_length(char *s)
{
	short len;
	short i;

	len = 0;
	i = 0;
	while (*(s + i))
	{
		len++;
		i++;
	}
	return (len);
}
