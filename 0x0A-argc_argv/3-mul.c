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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
