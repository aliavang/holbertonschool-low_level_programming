#include "holberton.h"
/**
 * _strcat - Glue two strings together
 * @dest: String one
 * @src: String two
 *
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, index;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	index = 0;
	while (src[index] != '\0')
	{
		dest[dest_len] = src[index];
		index++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
