#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Returns the length of a given string (excluding the '\0')
 * @s: The string whose length is computed
 *
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
 * _strdup - Duplicates a given string in a dynamically allocated memory area
 * @s: The string to be duplicated
 *
 * Description: Uses _strlen to get the number of characters in the string
 * then allocates the necessary amount of memory (including for the '\0')
 * using malloc, then duplicates the characters with a loop
 * Return: A pointer to the duplicated string if successful, NULL if not
 * successful or if the string to be duplicated is empty (NULL)
 */
char *_strdup(char *s)
{
	int len, i;
	char *dup;

	len = _strlen(s);
	dup = malloc(sizeof(char) * (len + 1));
	if (s == NULL || dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (len + 1))
	{
		*(dup + i) = *(s + i);
		i++;
	}
	return (dup);
}
