#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Returns the length of a given string
 * @s: The string whose length is being computed
 *
 * Return: The number of characters in s (0 if NULL or empty)
 */
unsigned int _strlen(char *s)
{
	unsigned int len;
	char *ptr;

	len = 0;
	ptr = s;
	if (s == NULL)
	{
		return (len);
	}
	while (*ptr)
	{
		len++;
		ptr++;
	}
	return (len);
}

/**
 * get_min - Gets the minimum between 2 numbers
 * @n1: First number
 * @n2: Second number
 *
 * Return: Minimum of n1 & n2
 */
unsigned int get_min(unsigned int n1, unsigned int n2)
{
	if (n1 <= n2)
	{
		return (n1);
	}
	return (n2);
}

/**
 * string_nconcat - Concatenates s1 and a given amount of s2 and returns result
 * @s1: First string which will be completely in the concatenated string
 * @s2: Second string which will be partially in the concatenated string
 * @n: The number of bytes of s2 to include in the concatenated string
 *
 * Description: The function achieves its purpose by first concatenating s1
 * and s2 completely, and then trimming out the excess (if any) from n using
 * realloc. I could have used malloc from the get go and avoided using realloc
 * and trimming, but I just wanted to play with realloc.
 * Return: A pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *cat, *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	cat = malloc(sizeof(char) * (len1 + get_min(len2, n) + 1));
	if (cat == NULL)
	{
		return (NULL);
	}
	ptr = cat;
	for (i = 0; i < len1; i++)
	{
		*ptr = s1[i];
		ptr++;
	}
	for (i = 0; i < len2 && i < n; i++)
	{
		*ptr = s2[i];
		ptr++;
	}
	*ptr = '\0';
	return (cat);
}
