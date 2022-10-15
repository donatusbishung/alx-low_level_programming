#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a \n
 * @seperator: separator to print btw numbers
 * @n: number of numbers to print
 *
 * Return: 0
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list mylist;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(mylist, unsigned int);
			printf("%d", num);

		if (seperator != NULL && i != n - 1)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(mylist);
}
