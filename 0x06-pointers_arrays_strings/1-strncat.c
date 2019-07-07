#include "holberton.h"
/**
 * _strncat - Glue two strings together, but only up to nth bytes from
 * string 2
 * @dest: String one
 * @src: String 2
 * @n: Number of bytes to glue to string one
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, index;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[dest_len] = src[index];
		dest_len++;
		index++;
	}
	return (dest);
}
