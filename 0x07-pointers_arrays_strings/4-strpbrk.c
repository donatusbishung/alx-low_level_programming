#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function searches a string for any set of bytes
 * @s: string
 * @accept:
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + 1);
		}
	}
	return ('\0');
}
