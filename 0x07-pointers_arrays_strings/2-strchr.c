#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - Find specified character in string
 * @s: String to be evaluated
 * @c: Character to look for
 *
 * Return: Pointer to where character was located
 */
char *_strchr(char *s, char c)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;
	}
	if (s[index] == '\0')
	{
		return (s - 1);
	}
	return (NULL);
}
