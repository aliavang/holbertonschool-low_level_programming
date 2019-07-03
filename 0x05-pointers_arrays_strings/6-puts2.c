#include "holberton.h"
/**
 * puts2 - Print every other character from string
 * @str: String input
 *
 * Return: Void
 */
void puts2(char *str)
{
	int len, index;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	index = 0;
	while (index <= len)
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
