#include "search_algos.h"
/**
 * binary_search - Search value in array using binary search algorithm
 * @array: Pointer to beginning of array
 * @size: Size of array
 * @value: Value to search for
 *
 * Return: Value if found otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t r, l, mid, cur;

	if (array == NULL)
	{
		return (-1);
	}
	l = 0;
	r = size - 1;
	while (l <= r)
	{
		cur = l;
		printf("Searching in array: ");
		while (cur < r)
		{
			printf("%d, ", array[cur]);
			cur++;
		}
		printf("%d\n", array[cur]);
		mid = l + ((r - l) / 2);
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	return (-1);
}
