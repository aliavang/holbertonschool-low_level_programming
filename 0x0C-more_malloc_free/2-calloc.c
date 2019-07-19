#include "holberton.h"
/**
 * _memset - Fill memory with a constant byte
 * @p_mem: Memory area
 * @b: Constant byte to fill memory area
 * @n: Amount of bytes to fill
 *
 * Return: Pointer to memory area
 */
char *_memset(char *p_mem, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		p_mem[count] = b;
		count++;
	}
	return (p_mem);
}
/**
 * _calloc - Allocate memory for array
 * @nmemb: Number of elements
 * @size: Size of array
 *
 * Return: Pointer to newly allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p_arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p_arr = malloc(size * nmemb);
	if (p_arr == NULL)
	{
		return (NULL);
	}
	p_arr = _memset(p_arr, 0, nmemb * size);
	return (p_arr);
}
