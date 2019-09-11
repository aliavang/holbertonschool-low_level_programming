#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int tens;
	int ones;

	for (tens = 0; tens <= 8; tens++)
	{
		for (ones = 1; ones <= 9; ones++)
		{
			if (ones < tens || ones == tens)
			{
				continue;
			}
			else
			{
				putchar(tens + '0');
				putchar(ones + '0');
				if (tens != 8 || ones != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
