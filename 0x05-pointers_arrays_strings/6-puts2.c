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
		if (*(str + sen) == '\0')
			break;
		sen++;
	}
	if (sen % 2 == 1)
		a = sen / 2;
	else
		a = (sen - 1) / 2;
	for (a++; a < sen; a++)
		_putchar(*(str + i));
	_putchar('\n');
}
