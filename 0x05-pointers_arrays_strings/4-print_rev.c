#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: value
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int number = 0;

	while (number >= 0)
	{
		if (s[number] == '\0')
		{
			_putchar('\n');
			break;
			number++;
		}
		for (number--; number >= 0)
		{
			_putchar(s[number]);
			_putchar('\n');
		}
	}
}
