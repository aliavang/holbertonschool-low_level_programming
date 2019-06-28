#include "holberton.h"
/**
 * print_triangle - Prints a triangle
 * @size: Size of triangle to be printed
 *
 * Return: Void
 */
void print_triangle(int size)
{
	int hash, space, loop;

	if (size > 0)
	{
		loop = 0;
		while (loop < size)
		{
			space = size - 1;
			while (space > loop)
			{
				_putchar(' ');
				space--;
			}
			hash = 0;
			while (hash <= loop)
			{
				_putchar('#');
				hash++;
			}
			loop++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
