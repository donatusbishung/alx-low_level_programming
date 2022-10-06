#include "main.h"

/**
 * _abs - entry
 *
 * @number: integer
 *
 * Return: last digit value
 */

int _abs(int number)
{
	if (number < 0)
	{
		return (number * -1);
	}
	else
	{
		return (number);
	}
	_putchar('\n');
}
