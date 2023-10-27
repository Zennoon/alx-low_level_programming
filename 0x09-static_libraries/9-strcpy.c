#include "main.h"

/**
 * _strcpy - Copies the string in the second argument to the first argument
 * @dest: The string being copied into
 * @src: The string being copied
 *
 * Return: The pointer to the resulting string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
