#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strchr - Finds a character in a given string and returns a pointer to it
 * @s: The string to be searched
 * @c: The character to search for
 *
 * Return: If c is found in s, a pointer to that character in s, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = s;
	while (*ptr)
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}
	if (c == '\0')
	{
		return (ptr);
	}
	return (NULL);
}

/**
 * _strspn - Computes the number of bytes of a string that are in another
 * @s: The string whose bytes are checked against another string
 * @accept: The string that the bytes in s are checked against
 *
 * Description: Counts the number of bytes of the initial part of s that
 * consist only of characters in accept
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		if (_strchr(accept, s[i]) == NULL)
		{
			break;
		}
		count++;
	}
	return (count);
}
