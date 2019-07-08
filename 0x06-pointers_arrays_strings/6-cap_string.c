#include "holberton.h"
/**
 * cap_string - Capitalize all words of a string
 * @s: String input
 *
 * Return: Pointer to string
 */
char *cap_string(char *s)
{
	int index, sep_index;
	char sep[] = "' '\t\n,;.!?\"(){}";

	index = 0;
	while (s[index] != '\0')
	{
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
		}
		sep_index = 0;
		while (sep[sep_index] != '\0')
		{
			if (s[index] == sep[sep_index])
			{
				if (s[index + 1] >= 'a' && s[index + 1] <= 'z')
				{
					s[index + 1] = s[index + 1] - 32;
				}
			}
			sep_index++;
		}
		index++;
	}
	return (s);
}
