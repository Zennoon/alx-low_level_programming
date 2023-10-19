#include "main.h"

int get_length(char *);

/**
 * _strncpy - Concatenates a specified number of bytes of string 2 to string 1
 * @dest: The string which another string is being concatenated to
 * @src: The string of which characters will be concatenated to dest
 * @n: The number of bytes of src to concatenate to dest
 *
 * Description: The function treats the strings as arrays. If n is greater than
 * the length of src, n is reduced to src's length.
 * Then, n characters are added to the end of dest, and finally, '\0' is added.
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int i;

	len1 = get_length(dest);
	len2 = get_length(src);
	if (n > len2)
		n = len2;
	i = 0;
	while (i < n)
	{
		dest[len1] = src[i];
		len1++;
		i++;
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
