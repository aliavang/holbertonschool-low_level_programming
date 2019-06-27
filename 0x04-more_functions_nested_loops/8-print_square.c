#include "holberton.h"
/**
 * print_square - Print a square
 * @size: Size of square
 *
 * Return: Void
 */
void print_square(int size)
{
	int loop_out;
	int loop_in;

	if (!(size <= 0))
	{
		loop_out = 0;
		while (loop_out < size)
		{
			loop_in = 0;
			while (loop_in < size)
			{
				_putchar('#');
				loop_in++;
			}
			_putchar('\n');
			loop_out++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
