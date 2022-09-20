#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: character
 *
 * Return: 0
 */

void puts2(char *str)
{
	int sen = 0, a;

	while (sen >= 0)
	{
		if (*(str + len) == '\0')
			break;
		sen++;
	}
	if (len % 2 == 1)
		i = sen / 2;
	else
		i = (sen - 1) / 2;
	for (i++; i < sen; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
