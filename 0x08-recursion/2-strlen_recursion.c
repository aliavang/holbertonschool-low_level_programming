#include "holberton.h"
/**
 * _strlen_recursion - Gets length of string
 * @s: String to be evaluated
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (len + _strlen_recursion(s + 1));
}
