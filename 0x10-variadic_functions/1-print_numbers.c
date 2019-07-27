#include "variadic_functions.h"
/**
 * print_numbers - Print only numbers
 * @separator: String printed between numbers
 * @n: Number of arguments
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int sum;

	va_start(args, n);
	if (n == 0)
	{
		return;
	}
	sum = 0;
	while (sum < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (sum < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		sum++;
	}
	va_end(args);
	printf("\n");
}
