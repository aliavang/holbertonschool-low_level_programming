#include "holberton.h"
/**
 * string_toupper - Changes all lowercase in string to uppercase
 * @s: String to evaluate
 *
 * Return: Pointer to string
 */
char *string_toupper(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] >= 'a' && s[index] <= 'z')
		{
			s[index] = s[index] - 32;
		}
		index++;
	}
	return (s);
}
