#include "holberton.h"
/**
 * array_range - Create an array of integers
 * @min: Minimum for range
 * @max: Maximum for range
 *
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *p_arr;
	int index;

	if (min > max)
	{
		return (NULL);
	}
	p_arr = malloc(max - min + 1);
	if (p_arr == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (min <= max)
	{
		p_arr[index] = min;
		index++;
		min = min + 1;
	}
	return (p_arr);
}
