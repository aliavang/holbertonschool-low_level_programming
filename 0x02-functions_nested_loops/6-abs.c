#include "holberton.h"
/**
 * _abs - Computes absolute value of integer
 * @n: Number input
 *
 * Return: Absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
