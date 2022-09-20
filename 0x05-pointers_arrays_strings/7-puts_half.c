#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: character
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int sen, a;

	sen = 0;
	while (sen >= 0)
	{
		if (*(str + sen) == '\0')
			break;
		sen++;
	}
	if (sen % 2 == 1)
		a = sen / 2;
	else
		a = (sen - 1) / 2;
	for (a++; a < sen; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
