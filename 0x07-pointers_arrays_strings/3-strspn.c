#include "holberton.h"
/**
 * _strspn - Gets length of prefix substring
 * @s: String to be evaluated
 * @accept: String with characters to match
 *
 * Return: Count of string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i1, i2, len;

	i1 = 0;
	len = 0;
	while (s[i1] != ' ')
	{
		i2 = 0;
		while (accept[i2] != '\0')
		{
			if (s[i1] == accept[i2])
			{
				len = len + 1;
				break;
			}
			i2++;
		}
		i1++;
	}
	return (len);
}
