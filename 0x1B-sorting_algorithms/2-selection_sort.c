#include "sort.h"
/**
 * swapme - function to swap numbers
 *
 * @to: smaller number
 * @from: bigger number
 */
void swapme(int *to, int *from)
{
	int temp;
	temp = *to;
	*to = *from;
	*from = temp;
}
/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: pointer to the artray of integers
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	if (!array || size < 2)
		return;
	for (j = 0; j < size - 1; j++)
	{
		min = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[i] < array[min])
			{
				min = i;
			}
		}
		if (array[min] != array[j])
		{
			swapme(&array[min], &array[j]);
			print_array(array, size);
		}
	}
}
