#include "holberton.h"
/**
 * print_rev - Print string in reverse
 * @s: String input
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int index, len;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	len = index - 1;
	while (s[len] >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
