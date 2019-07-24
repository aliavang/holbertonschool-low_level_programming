#include "function_pointers.h"
/**
 * print_name - Print name given as is or in uppercase
 * @name: String containing name
 * @f: Pointer pointing to function that will format name as is or in
 * uppercase
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	f(name);
}
