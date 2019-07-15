#include "holberton.h"
/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguements from command line
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index;

	index = 0;
	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
