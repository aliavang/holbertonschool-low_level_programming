#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lalpha;
	char ualpha;

	lalpha = 'a';
	while (lalpha <= 'z')
	{
		putchar(lalpha);
		lalpha++;
	}
	ualpha = 'A';
	while (ualpha <= 'Z')
	{
		putchar(ualpha);
		ualpha++;
	}
	putchar('\n');
	return (0);
}
