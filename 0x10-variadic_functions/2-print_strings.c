#include "variadic_functions.h"
/**
 * print_strings - Print strings
 * @separator: String to be printed between each string
 * @n: Number of string passed
 *
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int index;
	char *s;

	va_start(string, n);
	index = 0;
	while (index < n)
	{
		s = va_arg(string, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}
		if (index < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		index++;
	}
	va_end(string);
	printf("\n");
}
