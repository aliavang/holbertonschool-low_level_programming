#include "search_algos.h"
/**
 * jump_search - Search value using jump search algorithm
 * @array: Pointer to beginning of array
 * @size: Size of array
 * @value: Value to search for
 *
 * Return: Value if found otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump, prev;

	if (array == NULL)
	{
		return (-1);
	}
	jump = sqrt(size);
	low = 0;
	high = jump;
	while (low < size)
	{
		if (prev != low)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		if (array[high] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       low, high);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low += jump;
		high += jump;
		prev = low;
	}
	while (low <= high)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
		{
			return (low);
		}
		low++;
	}
	return (-1);
}
