#include "holberton.h"
/**
 * malloc_checked - Check if malloc was successful
 * @b: Amount to malloc
 *
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	char *p_mem;

	if (b == NULL)
	{
		return (NULL);
	}
	p_mem = malloc(sizeof(unsigned int) * b);
	if (p_mem == NULL)
	{
		exit(98);
	}
	return (p_mem);
}
