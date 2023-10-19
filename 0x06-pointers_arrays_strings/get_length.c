#include "main.h"

/**
 * get_length - Computes and returns the length of a given string
 * @s: The string whose length is being computed
 *
 * Description: Counts the number of characters until a null terminator
 * is found in the string
 * Return: The length of s
 */
int get_length(char *s)
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
