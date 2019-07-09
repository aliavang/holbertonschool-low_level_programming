#include "holberton.h"
/**
 * _strpbrk - Locates first occurence in string of any of bytes in accept
 * @s: String to be evaluated
 * @accept: String with characters to be matched
 *
 * Return: Pointer to where character is located in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (NULL);
}
