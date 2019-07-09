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
	int count;
	char *chara;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
		{
			return (chara = &s[count]);
		}
		count++;
	}
	return (NULL);
}
