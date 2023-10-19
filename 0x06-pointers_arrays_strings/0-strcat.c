#include "main.h"

int get_length(char *);

/**
 * _strcat - Concatenates two strings and returns a pointer to the result
 * @dest: The string which a string is concatenated to
 * @src: The string to be concatenated to dest
 *
 * Return: A pointer to the dest string
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int i;

	len1 = get_length(dest);
	len2 = get_length(src);
	for (i = 0; i < len2; i++)
	{
		dest[len1] = src[i];
		len1++;
	}
	dest[len1] = '\0';
	return (dest);
}

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
