#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: string 0ne
 * @s2: string two
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0;

	while (a == 0)
	{
		if (*(s1 + b) == '\0' && *(s2 + b) == '\0')
			break;
		a = *(s1 + b) - *(s2 + b);
		b++;
	}
	return (a);
}
