#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lower case
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
