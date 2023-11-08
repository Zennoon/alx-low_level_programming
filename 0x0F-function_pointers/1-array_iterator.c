#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Calls back a given function on each elem of a given array
 * @array: The array whose elements are passed to the function
 * @size: The size of the array
 * @action: The callback function which is called on each elem (the action to
 * be performed on each elem)
 *
 * Description: action is a pointer to a function that accepts one integer arg,
 * and returns nothing
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
