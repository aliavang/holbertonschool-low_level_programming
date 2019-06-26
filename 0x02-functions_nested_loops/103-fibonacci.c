#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long num1, num2, sum;
	int start;

	num1 = 0;
	num2 = 1;

	start = 0;
	while (start <= 31)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		if (sum % 2 == 0)
		{
			printf("%li", sum);
			printf("\n");
		}
		start++;
	}
	return (0);
}
