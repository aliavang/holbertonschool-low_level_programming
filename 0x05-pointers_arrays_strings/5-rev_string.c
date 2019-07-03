#include "holberton.h"
/**
 * rev_string - Reverse string
 * @s: String input
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int len, start, temp;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	start = 0;
	while (start < len)
	{
		temp = s[start];
		s[start] = s[len];
		s[len] = temp;
		len--;
		start++;
	}
}
