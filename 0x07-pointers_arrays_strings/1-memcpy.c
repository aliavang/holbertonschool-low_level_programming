#include "holberton.h"
/**
 * _memcpy - Copy memory area
 * @dest: Copy memory area to
 * @src: Memory area to copy from
 * @n: Number of bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
