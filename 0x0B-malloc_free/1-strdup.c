#include "holberton.h"
/**
 * _strdup - Duplicate a string to newly allocated space
 * @str: String to be duplicated
 *
 * Return: Pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *p_str;
	int index, len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len = len + 1;
	p_str = malloc(sizeof(char) * len);
	if (p_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while (str[index] != '\0')
	{
		p_str[index] = str[index];
		index++;
	}
	p_str[index] = '\0';
	return (p_str);
}
