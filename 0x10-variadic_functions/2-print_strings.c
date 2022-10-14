#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a \n
 * @seperator: separator ro print btw the strings
 * @n: number of strings to print
 *
 * Return: 0
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(mylist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && seperator)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(mylist);
}
