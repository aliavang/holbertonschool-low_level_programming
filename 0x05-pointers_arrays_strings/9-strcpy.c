#include "holberton.h"
/**
 * _strcpy - Copy string from src to dest
 * @src: Where string is stored
 * @dest: Buffer to copy string to
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p_dest;
	int index;

	p_dest = dest;
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (p_dest);
}
