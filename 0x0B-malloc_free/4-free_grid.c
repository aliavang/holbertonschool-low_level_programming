#include "holberton.h"
/**
 * free_grid - Free 2 dimensional array
 * @grid: Pointer to pointer to array
 * @height: Height of array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int row;

	row = 0;
	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
