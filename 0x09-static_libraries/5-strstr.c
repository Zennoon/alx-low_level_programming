#include <stdio.h>
#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string whose length is being computed
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len;
	char *ptr;

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
 * _strncmp - Compares two strings upto n and returns a number accordingly
 * @s1: The first string of the comparison
 * @s2: The second string
 * @n: The number of bytes to compare
 *
 * Return: 0 if s1 == s2, a non-zero number otherwise
 */
int _strncmp(char *s1, char *s2, int n)
{
	int diff, i;
	char *ptr1, *ptr2;

	diff = 0;
	ptr1 = s1;
	ptr2 = s2;
	for (i = 0; i < n; i++)
	{
		if (*ptr1 != *ptr2)
		{
			diff += (*ptr1 - *ptr2);
			break;
		}
		ptr1++;
		ptr2++;
	}
	return (diff);
}

/**
 * _strstr - Finds the first occurence of one string in another string
 * @haystack: The string that another string is searched inside of
 * @needle: The string to be searched inside haystack
 *
 * Return: A pointer to the first character of the found substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int len_s, len_ndl, i;
	char *ptr;

	len_s = _strlen(haystack) + 1;
	len_ndl = _strlen(needle);
	ptr = haystack;
	for (i = 0; i < len_s - len_ndl; i++)
	{
		if (!(_strncmp(ptr, needle, len_ndl)))
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
