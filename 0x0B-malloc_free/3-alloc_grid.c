#include "holberton.h"
/**
 * alloc_grid - Allocate space for a 2 dimensional array of integers
 * @width: Width/column of array
 * @height: Height/row of array
 *
 * Return: Pointer to pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **p_arr;
	int row, col;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p_arr = malloc(sizeof(int *) * height);
	if (p_arr == NULL)
	{
		return (NULL);
	}
	row = 0;
	while (row < height)
	{
		p_arr[row] = malloc(sizeof(int) * width);
		if (p_arr[row] == NULL)
		{
			while (row >= 0)
			{
				free(p_arr[row]);
				row--;
			}
			free(p_arr);
			return (NULL);
		}
		col = 0;
		while (col < width)
		{
			p_arr[row][col] = 0;
			col++;
		}
		row++;
	}
	return (p_arr);
}
