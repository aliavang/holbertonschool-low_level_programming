#include "holberton.h"
/**
 * print_chessboard - Print chessboard
 * @a: Chessboard array
 *
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	row = 0;
	while (row < 8)
	{
		col = 0;
		while (col < 8)
		{
			_putchar(a[row][col]);
			if (col == 7)
			{
				_putchar('\n');
			}
			col++;
		}
		row++;
	}
}
