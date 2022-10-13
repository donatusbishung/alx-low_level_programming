#include "function_pointers.h"

/**
 * print_name - function prints name
 * @name: name to print
 * @f: function to print with
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
