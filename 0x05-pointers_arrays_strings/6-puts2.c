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
	int sen = 0;

	while (sen >= 0)
	{
		if (str[sen] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (sen % 2 == 0)
			_putchar(str[sen]);
		sen++;
	}
}
