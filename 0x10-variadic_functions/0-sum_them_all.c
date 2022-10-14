#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its para.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list mylist;

	va_start(mylist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(mylist, int);
	va_end(mylist);
	return (sum);
}
