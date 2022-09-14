#include "main.h"

/**
 * _islower- shows 1 if the input is a
 * lower case character. Another casses, shows
 * 0
 *
 * @c: The character in ASCII
 *
 * Description: prints all lowercase letters
 *
 * Return: Always(0).
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
