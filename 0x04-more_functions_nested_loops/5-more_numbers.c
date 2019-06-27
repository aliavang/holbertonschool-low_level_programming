#include "holberton.h"
/**
 * more_numbers - Print number 0-14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int loop, count;

	loop = 0;
	while (loop < 11)
	{
		count = 0;
		while (count < 15)
		{
			if (count >= 10)
			{
				_putchar(count / 10 + '0');
			}
			_putchar(count % 10 + '0');
			count++;
		}
		_putchar('\n');
		loop++;
	}
}
