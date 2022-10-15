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
	va_list mylist;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(mylist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
		if (format[i] == t_arg[j] && c)
		{
			printf(", ");
			break;
		} j++;
	}
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(mylist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(mylist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(mylist, double)), c = 1;
			break;
		case 's':
			str = va_arg(mylist, char *), c = 1;
			if (!str)
			{
				printf("nil)");
				break;
			}
			printf("%s", str);
			break;
	} i++;
	}
	printf("\n"), va_end(mylist);
}
