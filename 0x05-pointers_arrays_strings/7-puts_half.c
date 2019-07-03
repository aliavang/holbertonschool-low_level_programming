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
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		len = len / 2;
		while (str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}
