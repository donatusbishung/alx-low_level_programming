#include "main.h"

/**
 * print_last_digit - entry
 *
 * @number: integer to be printed
 *
 * Return: the last value of the last digit
 */

int print_last_digit(int number)
{
	int l;

	l = number % 100;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(1 + 48);
		return (1);
	}
}
