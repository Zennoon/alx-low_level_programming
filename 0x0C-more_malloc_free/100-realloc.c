#include <stdlib.h>
#include "main.h"

/**
 * get_min - Returns the minimum of two non negative integers
 * @n1: First number
 * @n2: Second number
 *
 * Return: Minimum of n1 and n2
 */
unsigned int get_min(unsigned int n1, unsigned int n2)
{
	if (n1 <= n2)
	{
		return (n1);
	}
	return (n2);
}

/**
 * _realloc - Implementation of realloc using malloc and free
 * @ptr: The address of previously allocated memory
 * @old_size: Amount of memory previously allocated to ptr
 * @new_size: Amount of memory to reallocate to ptr
 *
 * Return: The newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr;
	char *old_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return ((void *) new_ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	old_ptr = (char *) ptr;
	if (new_ptr != NULL)
	{
		for (i = 0; i < get_min(old_size, new_size); i++)
		{
			new_ptr[i] = old_ptr[i];
		}
		free(ptr);
	}
	return ((void *) new_ptr);
}
