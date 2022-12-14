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
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (seperator != NULL && i != n - 1)
			printf("%s", seperator);
	}
	va_end(mylist);
	printf("\n");
}
