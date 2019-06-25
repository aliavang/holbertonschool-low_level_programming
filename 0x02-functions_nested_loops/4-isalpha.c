#include "holberton.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Character input
 *
 * Return: 1 if lowercase or uppercase, 0 if not alphabet
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 97)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
