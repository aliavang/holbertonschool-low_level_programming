#include "holberton.h"
/**
 * _isdigit - Checks if input is a digit from 0-9 in ASCII
 * @c: Number to be evaluated
 *
 * Return: 1 if input is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
