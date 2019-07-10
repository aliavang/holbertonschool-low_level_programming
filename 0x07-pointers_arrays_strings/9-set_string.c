#include "holberton.h"
/**
 * set_string - Set pointer to pointer to string in pointer
 * @s: String to be changed
 * @to: String not to be changed
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
