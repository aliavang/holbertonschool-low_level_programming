#include "holberton.h"
/**
 * print_diagonal - Print diagonal line in terminal
 * @n: Number of slashes to be printed
 *
 * Return: Void
 */
void print_diagonal(int n)
{
	int slash, space;

	if (!(n <= 0))
	{
		slash = 0;
		while (slash < n)
		{
			space = 0;
			while (space < slash)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			slash++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
