#include "main.h"

/**
 * _strncpy - Copies n bytes of a string to another string
 * @dest: The string to which we are copying
 * @src: The string being copied to dest
 * @n: The number of bytes of src to copy to dest
 *
 * Return: A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	short in_bounds;

	in_bounds = 1;
	for (i = 0; i < n; i++)
	{
		if (src[i] && in_bounds)
		{
			dest[i] = src[i];
		}
		else
		{
			in_bounds = 0;
			dest[i] = '\0';
		}
	}
	return (dest);
}
