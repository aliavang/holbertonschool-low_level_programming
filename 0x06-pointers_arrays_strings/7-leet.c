#include "holberton.h"
/**
 * leet - Changes string to leet
 * @s: String to be changed to leet
 *
 * Return: Pointer to string
 */
char *leet(char *s)
{
	char letter[] = "AaEeOoTtLl";
	char num[] = "4433007711";
	int i1, i2;

	i1 = 0;
	while (s[i1] != '\0')
	{
		i2 = 0;
		while (letter[i2] != '\0')
		{
			if (s[i1] == letter[i2])
			{
				s[i1] = num[i2];
			}
			i2++;
		}
		i1++;
	}
	return (s);
}
