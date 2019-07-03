#include "holberton.h"
/**
 * puts2 - Print every other character from string
 * @str: String input
 *
 * Return: Void
 */
void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index += 2;
	}
	_putchar('\n');
}
