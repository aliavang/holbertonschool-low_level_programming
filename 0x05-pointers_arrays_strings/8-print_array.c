#include "holberton.h"
/**
 * print_array - Print n elements from array
 * @a: Array
 * @n: Number of elements to print
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		printf("%d", a[index]);
		if (index < n - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
}
