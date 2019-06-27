#include "holberton.h"
/**
 * print_line - Print straight line in terminal
 * @n: Number of time to print character for line
 *
 * Return: Void
 */
void print_line(int n)
{
	int loop;

	if (!(n <= 0))
	{
		loop = 0;
		while (loop <= n)
		{
			_putchar('_');
			loop++;
		}
	}
	_putchar('\n');
}
