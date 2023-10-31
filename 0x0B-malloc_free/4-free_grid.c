#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees memory allocated to create the 2D array in 3-alloc_grid.c
 * @grid: The grid/2D array to be freed
 * @h: The height of the 2D array (the number of inner allocations)
 *
 * Return: void
 */
void free_grid(int **grid, int h)
{
	int i;

	for (i = 0; i < h; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
