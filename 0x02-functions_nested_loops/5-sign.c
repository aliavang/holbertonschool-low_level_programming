#include "holberton.h"
/**
 * print_sign - Print sign of a number
 * @n: Number input
 *
 * Return: 1 if positive, 0 if 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
