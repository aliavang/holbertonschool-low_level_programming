#include "holberton.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments from command line
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, index;

	if (argc < 0)
	{
		printf("0\n");
	}
	sum = 0;
	index= 0;
	while (index < argc)
	{
		if (*argv[index] != 0 && *argv[index] != 9)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[index]);
			index++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
