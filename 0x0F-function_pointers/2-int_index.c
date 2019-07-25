#include "function_pointers.h"
/**
 * int_index - Search for integer
 * @array: Array of integers
 * @size: Size of array
 * @cmp: Pointer pointing to function
 *
 * Return: Index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (-1);
	}
	index = 0;
	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
