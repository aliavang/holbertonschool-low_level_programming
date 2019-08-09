#include "holberton.h"
/**
 * get_bit - Return value at given index
 * @n: Number
 * @index: Index to retrieve number
 *
 * Return: Number at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;

	if (index > 64)
	{
		return (-1);
	}
	shift = n >> index;
	return (shift & 1);
}
