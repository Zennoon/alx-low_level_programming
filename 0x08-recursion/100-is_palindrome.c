#include <stdio.h>
#include "main.h"

/**
 * _strlen - Computes and returns the length of a string recursively
 * @s: The string whose length is computed
 *
 * Return: The length of s
 */
int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Gets a string from is_palindrome and checks recursively
 * @start: Pointer pointing at the first character of the string
 * @end: Pointer pointing at the last character of the string
 *
 * Description: Checks if *start = *end recursively until start > end which
 * means that the string has been exhausted
 * Return: 1 if the string is palindrome, 0 if not
 */
int check_palindrome(char *start, char *end)
{
	if (*start != *end)
	{
		return (0);
	}
	if (start >= end)
	{
		return (1);
	}
	return (check_palindrome(start + 1, end - 1));
}

/**
 * is_palindrome - Uses check_palindrome to check if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int last_ind;

	last_ind = _strlen(s) - 1;
	return (check_palindrome(s, s + last_ind));
}
