#include "holberton.h"
/**
 * _strstr - Locate substring in string
 * @haystack: String to be evaluated
 * @needle: Substring to find
 *
 * Return: Pointer to beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i1, i2;

	i1 = 0;
	while (haystack[i1] != '\0')
	{
		i2 = 0;
		while (needle[i2] != '\0')
		{
			if (haystack[i1] == needle[i2])
			{
				while (haystack[i1] == needle[i2])
					{
						i1++;
						i2++;
						if (haystack[i1] != needle[i2])
						{
							break;
						}
						return (haystack + i1 - 1);
					}
			}
			i2++;
		}
		i1++;
	}
	return (NULL);
}
