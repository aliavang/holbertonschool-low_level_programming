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

	len = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (len + _strlen(s + 1));
}
/**
 * is_palindrome - Checks string if it is palindrome
 * @s: String to be evaluated
 *
 * Return: 1 if palindrome and 0 if otherwise
 */
int is_palindrome(char *s)
{
	int end, begin;

	end = _strlen(s) - 1;
	begin = 0;
	if (s[begin] != s[end])
	{
		return (0);
	}
	if (end == 0)
	{
		return (1);
	}
	if (s[begin] == s[end])
	{
		return (1);
	}
	return (is_palindrome(s - 1));
}
