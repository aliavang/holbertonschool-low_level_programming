#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long num1, num2, sum;
	int start;

	num1 = 0;
	num2 = 1;

	start = 0;
	while (start <= 49)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		printf("%lu", sum);
		if (start < 49)
		{
			printf(", ");
		}
		start++;
	}
	printf("\n");
	return (0);
}
