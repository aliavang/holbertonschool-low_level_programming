#include "holberton.h"
/**
 * malloc_checked - Check if malloc was successful
 * @b: Amount to malloc
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *p_mem;

	p_mem = malloc(b);
	if (p_mem == NULL)
	{
		exit(98);
	}
	return (p_mem);
}
