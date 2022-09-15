#include "main.h"

/**
 * print_last_digit - entry
 *
 * @number: number to be analzed
 *
 * Return: last digit
 */

int print_last_digit(int number)
{
	int l;

	l = number % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
