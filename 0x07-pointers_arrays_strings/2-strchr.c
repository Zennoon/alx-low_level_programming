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
		return (*ptr);
	}
	return (NULL);
}
