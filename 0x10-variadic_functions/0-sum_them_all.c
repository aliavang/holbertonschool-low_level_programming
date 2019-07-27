#include "variadic_functions.h"
/**
 * sum_them_all - Sum of all parameters passed
 * @n: Number of arguments
 *
 * Return: Sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, index;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	index = 0;
	while (index < n)
	{
		sum = sum + va_arg(args, unsigned int);
		index++;
	}
	va_end(args);
	return (sum);
}
