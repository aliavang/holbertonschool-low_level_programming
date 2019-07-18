#include "holberton.h"
/**
 * _strlen - Find length of string
 * @s: String to be evaluated
 *
 * Return: Length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * string_nconcat - Concat n bytes of string 2 to string 1
 * @s1: String one
 * @s2: String two
 * @n: Amount of bytes from string two
 *
 * Return: Pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p_str;
	unsigned int len1, i1, i2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	p_str = malloc(sizeof(char) * (len1 + n + 1));
	if (p_str == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; s1[i1] != '\0'; i1++)
	{
		p_str[i1] = s1[i1];
	}
	for (i2 = 0; i2 < n && s2[i2] != '\0'; i2++)
	{
		p_str[i1] = s2[i2];
		i1++;
	}
	p_str[i1] = '\0';
	return (p_str);
}
