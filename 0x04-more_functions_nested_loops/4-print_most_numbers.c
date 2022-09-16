#include "main.h"

/**
 * print_most_numbers - entry
 *
 * Return: do not print 2 and 4
 */

void print_most_numbers(void)
{
	int item;

	for (item = '0'; item <= '9'; item++)
	{
		if (item == '2' || item == '4')
			continue;
	else
		_putchar(item);
	}
	_putchar('\n');
}
