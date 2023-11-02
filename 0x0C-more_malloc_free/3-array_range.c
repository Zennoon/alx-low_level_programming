#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - Generates an array containing all the integers between 2 nums
 * @min: The smallest integer of the array
 * @max: The largest integer of the array
 *
 * Description: We can use calloc to generate the array, the number of integers
 * between min and max (inclusive) is (max - min + 1)
 * Return: A pointer to the array if calloc is successful, NULL if not, or if
 * min > max
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	arr = calloc((max - min + 1), sizeof(int));
	if (arr != NULL)
	{
		ptr = arr;
		for (i = min; i <= max; i++)
		{
			*ptr = i;
			ptr++;
		}
	}
	return (arr);
}
