#include "holberton.h"
/**
 * print_most_numbers - Print number 0-9 excluding 2 and 4
 *
 * Return: Void
 */
void print_most_numbers(void)
{
	int count;

	count = 0;
	while (count < 10)
	{
		if (count != 2 && count != 4)
		{
			_putchar(count + '0');
		}
		count++;
	}
	_putchar('\n');
}
