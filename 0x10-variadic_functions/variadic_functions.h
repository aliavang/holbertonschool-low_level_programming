#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format - Struct for format
 * @format: Format specifiers
 * @f: Function associated with format specifiers
 */
struct format
{
	char *format;
	void (*f)(va_list);
};
typedef struct format format_t;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS_H*/
