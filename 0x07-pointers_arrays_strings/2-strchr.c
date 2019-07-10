#include "holberton.h"
/**
 * _strchr - Find specified character in string
 * @s: String to be evaluated
 * @c: Character to look for
 *
 * Return: Pointer to where character was located
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s + 1);
	}
	else
	{
		return (NULL);
	}
}
