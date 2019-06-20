#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int base16_num;
	char base16_alpha;

	base16_num = 0;
	while (base16_num < 10)
	{
		putchar(base16_num + '0');
		base16_num++;
	}
	base16_alpha = 'a';
	while (base16_alpha < 'g')
	{
		putchar(base16_alpha);
		base16_alpha++;
	}
	putchar('\n');
	return (0);
}
