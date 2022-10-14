#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - print a char
 * @c: char to print
 *
 * Return: 0
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to be printed
 *
 * Return: 0
 */

void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_i - prints an integer
 * @i: int to be printed
 *
 * Return: 0
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float
 * @f: float to be printed
 *
 * Return: 0
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints anything
 * @format: list of argument type passed to the function
 *
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL},
	};
	va_list mylist;
	char *separator = "";

	va_start(mylist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0
	while (p[j].t != NULL)
	{
		if (*(p[j].t) == format[i])
		{
			printf("%s", separator);
			p[j].f(mylist);
			separator = ", ";
			break;
		}
		j++;
	}
	i++
	}
	va_end(mylist);
	printf("\n");
}
