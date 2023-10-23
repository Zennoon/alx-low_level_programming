#include "main.h"

/**
 * _memcpy - Copies a given number of bytes from a source memory area to a dest
 * @dest: The memory areas to be copied into
 * @src: The memory areas copied from
 * @n: The number of bytes to copy from src to dest
 *
 * Return: Pointer to the destination (dest)
 */
char *_memcpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
