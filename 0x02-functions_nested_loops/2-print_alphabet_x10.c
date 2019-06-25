#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times
 *
 * Return: Void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int loop;

	loop = 0;
	while (loop < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		loop++;
	}
}
