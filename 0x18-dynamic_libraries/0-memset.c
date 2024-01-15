#include "main.h"

/**
 * _memset - Sets a specified number of bytes of a given string to a given char
 * @s: The string which will be filled
 * @b: The character which will fill the string
 * @n: How many bytes of s to fill with b
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
