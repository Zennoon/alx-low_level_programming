#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates char array of given size, inits it with a given char
 * @size: The size of the created array
 * @c: The character to initialize the array with
 *
 * Description: Uses malloc to allocate memory for the array using the given
 * size, then initializes it with c using a loop
 * Return: The created array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (!size || (arr == NULL))
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}
	return (arr);
}
