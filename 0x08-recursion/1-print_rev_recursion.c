#include "holberton.h"
/**
 * _print_rev_recursion - Print string in reverse
 * @s: String to be printed
 *
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
