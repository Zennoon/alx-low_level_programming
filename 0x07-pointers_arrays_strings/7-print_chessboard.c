#include "main.h"

/**
 * print_chessboard - Prints a 2d matrix of size [8][8] in chessboard format
 * @a: An array of arrays containing chessboard pieces
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
