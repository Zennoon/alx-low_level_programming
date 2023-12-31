#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Implementation of calloc using malloc
 * @nmemb: The number of elements in the array generated
 * @size: The size of each element
 *
 * Description: The amount of memory to be generated is nmemb * size, and each
 * member/element is initialized to 0.
 * Return: A pointer to the allocated memory (generated array) if malloc is
 * successful, NULL if it fails, or if nmemb or size are 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			*(arr + i) = 0;
		}
	}
	return ((void *)arr);
}
