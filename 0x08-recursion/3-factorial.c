#include "holberton.h"
/**
 * factorial - Find factorial of a number
 * @n: Number to find factorial of
 *
 * Return: Factorial of number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
