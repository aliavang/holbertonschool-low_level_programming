#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ralpha;

	ralpha = 'z';
	while (ralpha >= 'a')
	{
		putchar(ralpha);
		ralpha--;
	}
	putchar('\n');
	return (0);
}
