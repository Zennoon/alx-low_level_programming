#include "main.h" /* Not really needed */
#include <stdio.h>
int get_length(char *);

/**
 * rev_string - Reverses a given string
 * @s: The string to be reversed
 *
 * Description: First, we make a copy of the string, then we change the value
 * of each character in the string using a loop
 * Return: void
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = get_length(s);
	i = 0;
	while (i < len / 2)
	{
		char temp;

		temp = *(s + i);
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
		i++;
	}
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
