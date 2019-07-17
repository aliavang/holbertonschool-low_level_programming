#include "holberton.h"
/**
 * _strlen - Find length of string
 * @s: String to be evaluated
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len = len;
	return (len);
}
/**
 * str_concat - Glue s2 to s1
 * @s1: String one
 * @s2: String two
 *
 * Return: Pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, i1, i2;
	char *p_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	p_str = malloc(sizeof(char) * (s1_len + s2_len));
	if (p_str == NULL)
	{
		return (NULL);
	}
	i1 = 0;
	while (s1[i1] != '\0')
	{
		p_str[i1] = s1[i1];
		i1++;
	}
	i2 = 0;
	while (s2[i2] != '\0')
	{
		p_str[i1] = s2[i2];
		i1++;
		i2++;
	}
	p_str[i1] = '\0';
	return (p_str);
}
