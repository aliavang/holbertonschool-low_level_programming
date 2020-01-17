#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	jump = sqrt(size);
	low = 0;
	high = jump;
	while (low < size)
	{
		if (array[high] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       low, high);
			while (low <= high)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       low, array[low]);
				if (array[low] == value)
				{
					return (low);
				}
				low++;
			}
		}
	       	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		low += jump;
		high += jump;
	}
		return (-1);
}
