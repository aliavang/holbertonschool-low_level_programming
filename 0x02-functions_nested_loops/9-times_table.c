#include "holberton.h"
/**
 * times_table - Print multiplication table 0-9
 *
 * Return: Void
 */
void times_table(void)
{
	int y_hori;
	int x_verti;
	int pro;

	y_hori = 0;
	while (y_hori < 10)
	{
		x_verti = 0;
		while (x_verti < 10)
		{
			pro = (y_hori * x_verti);
			if (pro == 0)
			{
				_putchar(pro + '0');
				if (y_hori == 0 && x_verti != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (pro <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(pro + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(pro / 10 + '0');
				_putchar(pro % 10 + '0');
			}
			x_verti++;
		}
		_putchar('\n');
		y_hori++;
	}
}
