#include "main.h"

/**
 * _puts - prints a string followed by a new line
 *
 * @str: string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int number = 0;

	while (number >= 0)
	{
		if (str[number] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[number]);
		number++;
	}
}
