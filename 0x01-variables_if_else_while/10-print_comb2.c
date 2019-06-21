#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int m;
	int n;

	m = 48;
	while (m <= 57)
	{
		n = 48;
		while (n <= 57)
		{
			putchar(m);
			putchar(n);
			if (m != 57 || n != 57)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
