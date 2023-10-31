#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Returns the length of a given string
 * @s: The string whose length is counted
 *
 * Description: It just returns the number of non '\0' characters in s
 * so for instance, if NULL is passed, it has no characters inside, so
 * 0 is returned
 * Return: Length of s
 */
int _strlen(char *s)
{
	int len;
	char *ptr;

	if (s == NULL)
	{
		return (0);
	}
	len = 0;
	ptr = s;
	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}

/**
 * str_concat - Receives two strings and concatenates them and returns result
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 *
 * Description: First obtain the length of both strings, then allocate enough
 * memory for the sum of their length + 1 (for '\0'), then, starting with s1,
 * then s2, copy their contents to the new memory area. The task says to treat
 * NULL as an empty string. This is handled by the _strlen function which
 * returns 0 for NULL, so the for loops in this function will jump it.
 * Return: The concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *cat;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	cat = malloc(len1 + len2 + 1);

	if (cat != NULL)
	{
		for (i = 0; i < len1; i++)
		{
			cat[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			cat[i] = s2[j];
			i++;
		}
		cat[i] = '\0';
	}
	return (cat);
}
