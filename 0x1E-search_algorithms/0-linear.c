#include "search_algos.h"
/**
 * linear_search - Search for value in array using linear search algorithm
 * @array: Pointer to beginning of array
 * @size: Size of array
 * @value: Value to look for
 *
 * Return: Value if present otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
