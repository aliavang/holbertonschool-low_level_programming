#include "holberton.h"
/**
 * reverse_array - Reverse content of an array of integers
 * @a: Array
 * @n: Number of elements of array
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	index = 0;
	n = n - 1;
	while (index < n)
	{
		tmp = a[index];
		a[index] = a[n];
		a[n] = tmp;
		index++;
		n--;
	}
}
