#include "main.h"

/**
 * _isdigit - entry point
 * @c: character to print
 *
 * Return: 1 if c is a digit, or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
