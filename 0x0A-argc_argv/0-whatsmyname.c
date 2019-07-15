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
	while (argc == 0)
	{
		printf("%s\n", argv[0]);
		argc++;
	}
}
