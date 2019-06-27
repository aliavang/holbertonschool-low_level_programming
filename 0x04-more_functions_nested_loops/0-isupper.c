#include "holberton.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: Character input to be evaluated
 *
 * Return: 1 if input is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
