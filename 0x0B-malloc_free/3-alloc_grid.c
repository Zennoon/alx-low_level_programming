#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2d int array of given height & width
 * @width: Width of the created 2D array
 * @height: Height of the created 2D array
 *
 * Description: This task just takes the previous tasks 1 level further.
 * Remember that a 2D array is basically an array of 1D arrays, so first, we
 * make a pointer to an array of pointers, the size of which are 'height'.
 * This represents the rows, then each of these pointers point at an array
 * of numbers, the size of which are 'width'.
 * Return: The created 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **two_d;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	two_d = malloc(sizeof(int *) * height);
	if (two_d != NULL)
	{
		for (i = 0; i < height; i++)
		{
			two_d[i] = malloc(sizeof(int) * width);
			if (two_d[i] == NULL)
			{
				for (k = 0; k < i; k++)
				{
					free(two_d[k]);
				}
				free(two_d);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				two_d[i][j] = 0;
			}
		}
	}
	return (two_d);
}
