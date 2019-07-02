#include "holberton.h"
/**
 * _strlen - Find the length of a string
 * @s: String input
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
