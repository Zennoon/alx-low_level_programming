#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and retun=rns the pointer
 * @b: The size of the allocated memory
 *
 * Description: Uses malloc to allocate the specified amount of memory if
 * possible, if it fails, it exits with a status of 98 using exit
 * Return: A pointer to the allocated memory if successful, 98 otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr != NULL)
	{
		return (ptr);
	}
	exit(98);
}
