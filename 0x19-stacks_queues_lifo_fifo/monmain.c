#include "monty.h"
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument strings
 *
 * Return: EXIT_SUCCESS
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		fprintf(stderr, "%s", "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	return (0);
}
