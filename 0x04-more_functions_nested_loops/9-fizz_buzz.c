#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count;

	count = 1;
	while (count < 101)
	{
		if (count % 3 == 0 && count % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", count);
		}
		if (count < 100)
		{
			printf(" ");
		}
		count++;
	}
	printf("\n");
	return (0);
}