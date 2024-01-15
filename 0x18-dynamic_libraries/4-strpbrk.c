#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strchr_2 - Finds a character in a given string and returns a pointer to it
 * @s: The string to be searched
 * @c: The character to search for
 *
 * Return: If c is found in s, a pointer to that character in s, otherwise NULL
 */
char *_strchr_2(char *s, char c)
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
 * _strpbrk - Finds the first occurence of a char in 1 string found in another
 * @s: The string which we are searching for the first occurence of a character
 * @accept: The string which we check each char of s against until a match
 *
 * Description: find the first occurence in one string of any character in
 * another string
 * Return: A pointer to the first occurence in s of a char in accept, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (_strchr_2(accept, s[i]))
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
