#include "holberton.h"
/**
 * _memset - Fill memory with a constant byte
 * @s: Memory area
 * @b: Constant byte to be used to fill memory area
 * @n: Amount of bytes to fill up with constant byte
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
