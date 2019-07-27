#include "variadic_functions.h"
/**
 * print_char - Print character
 * @args: Arguments
 *
 * Return: Void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - Print integer
 * @args: Arguments
 *
 * Return: Void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - Print float
 * @args: Arguments
 *
 * Return: Void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - Print string
 * @args: Arguments
 *
 * Return: Void
 */
void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s", s);
}
/**
 * print_all - Print anything
 * @format: Types of arguments passed to function
 *
 * Return: Void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator;
	unsigned int index, index2;
	format_t formats[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	index = 0;
	separator = "";
	while (format != NULL && format[index] != '\0')
	{
		index2 = 0;
		while (index2 < 4)
		{
			if (*formats[index2].format == format[index])
			{
				printf("%s", separator);
				formats[index2].f(args);
				separator = ", ";
			}
			index2++;
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
