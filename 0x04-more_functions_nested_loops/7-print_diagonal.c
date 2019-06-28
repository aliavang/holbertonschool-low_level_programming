#include "holberton.h"
/**
 * print_diagonal - Print diagonal line in terminal
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int loop1, loop2;

	if (!(n <= 0))
	{
		loop1 = 0;
		while (loop1 < n)
		{
			loop2 = 0;
			while (loop2 < loop1)
			{
				_putchar(' ');
				loop2++;
			}
			_putchar('\\');
			_putchar('\n');
			loop1++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
