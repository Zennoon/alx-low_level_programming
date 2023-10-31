#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_grid - Prints a given 2D array of given height and width to stdout
 * @grid: The array to be printed
 * @w: Width of the array
 * @h: Height of the array
 *
 * Return: void
 */
void print_grid(int **grid, int w, int h)
{
	int i, j;

	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			printf("%d ", grid[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}

/**
 * main - The entry point of the program
 *
 * Description: Creates and prints a 2D array of specified height and width
 * using the alloc_grid function which allocates memory dynamically
 * Return: 0 if the memory is allocated successfully, 1 otherwise
 */
int main(void)
{
	int i;
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");
	grid[0][3] = 3;
	grid[3][4] = 34;
	print_grid(grid, 6, 4);
	for (i = 0; i < 4; i++)
	{
		free(grid[i]);
	}
	free(grid);
	return (0);
}
