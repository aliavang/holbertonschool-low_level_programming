#include "holberton.h"
/**
 * argstostr - Concatenate all arguments into a string
 * @ac: Number of arguments
 * @av: Arguments
 *
 * Return: Pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *p_str;
	int len, row, col, index;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (row = 0; row < ac; row++)
	{
		for  (col = 0; av[row][col] != '\0'; col++)
		{
			len++;
		}
		len++;
	}
	len++;
	p_str = malloc(sizeof(char) * len);
	if (p_str == NULL)
	{
		return (NULL);
	}
	index = 0;
	for (row = 0; row < ac; row++)
	{
		for (col = 0; av[row][col] != '\0'; col++)
		{
			p_str[index] = av[row][col];
			index++;
		}
		p_str[index] = '\n';
		index++;
	}
	return (p_str);
}
