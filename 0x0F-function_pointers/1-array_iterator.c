#include "function_pointers.h"
/**
 * array_iterator - Print elements in array in decimal or hex
 * depending on the function passed
 * @array: Array of integers
 * @size: Size of array
 * @action: Pointer pointing to function that will print in decimal or
 * hex
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
	{
		return;
	}
	index = 0;
	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
