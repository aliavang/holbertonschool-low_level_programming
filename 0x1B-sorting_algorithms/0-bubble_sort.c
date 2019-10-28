#include "sort.h"
/**
 * bubble_sort - Sort array of integers in ascending order
 * @array: Pointer to int array
 * @size: size of array
 *
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int max, tmp;

	if (size < 2 || array == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		max = array[0];
		j = 0;
		tmp = 0;
		while (j < size - 1)
		{
			if (max < array[j + 1])
			{
				max = array[j + 1];
			}
			else
			{
				tmp = array[j + 1];
				array[j + 1] = max;
				array[j] = tmp;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
