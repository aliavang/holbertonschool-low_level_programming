#include "holberton.h"
/**
 * swap_int - Swap values of two variables
 * @a: First variable
 * @b: Second variable
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
