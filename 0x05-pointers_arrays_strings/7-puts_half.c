#include "holberton.h"
/**
 * puts_half - Print second half of string
 * @str: String input
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int len, n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = (len + 1) / 2;
	while (n <= len - 1)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
