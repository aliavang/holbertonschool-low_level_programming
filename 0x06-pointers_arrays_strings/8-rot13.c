#include "holberton.h"
/**
 * rot13 - Change string into rot13
 * @s: String to be changed
 *
 * Return: Pointer to string
 */
char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i1, i2;

	i1 = 0;
	while (s[i1] != '\0')
	{
		i2 = 0;
		while (alpha[i2] != '\0')
		{
			if (s[i1] == alpha[i2])
			{
				s[i1] = rot13[i2];
				break;
			}
			i2++;
		}
		i1++;
	}
	return (s);
}
