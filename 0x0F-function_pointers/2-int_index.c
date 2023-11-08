#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Returns the index of first int that returns non 0 in given func
 * @array: The array whose elements are passed to the given function
 * @size: The size of the array
 * @cmp: A pointer to the function to which elems of array are passed
 *
 * Description: cmp is a pointer to a function that accepts one int arg, and
 * returns an int
 * Return: Index of first elem in array for which cmp returns non 0, or -1 if
 * size, cmp, or array are invalid
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size <= 0)
	{
		int i;

		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
		return (-1);
	}
	return (-1);
}
