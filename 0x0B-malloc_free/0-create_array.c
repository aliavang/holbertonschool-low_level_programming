#include "holberton.h"
/**
 * create_array - Create an array of characters
 * @size: Size of array
 * @c: Character inside array
 *
 * Return: Pointer to array of characters
 */
char *create_array(unsigned int size, char c)
{
	char *p_arr;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}
	p_arr = malloc(sizeof(char) * size);
	if (p_arr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < size)
	{
		p_arr[count] = c;
		count++;
	}
	return (p_arr);
}
