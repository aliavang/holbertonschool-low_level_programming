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
	int index;

	if (str == NULL)
	{
		return (NULL);
	}
	p_str = malloc(sizeof(char) * *str);
	if (p_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	while(str[index] != '\0')
	{
		p_str[index] = str[index];
		index++;
	}
	return (p_str);
}
