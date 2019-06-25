#include "holberton.h"
/**
 * jack_bauer - Print 00:00 to 23:59
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hour;
	int min;

	hour = 0;
	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
			min++;
		}
		hour++;
	}
}
