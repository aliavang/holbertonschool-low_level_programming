#include "holberton.h"
/**
 * _puts - Print a string
 * @str: String input
 *
 * Return: Void
 */
void _puts(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
