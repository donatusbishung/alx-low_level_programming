#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a charater in a string
 *
 * @s: string
 * @c: character to be located
 *
 * Return: to the first occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	{
		if (*(s + i) == c)
			return (s + i);
	}
	return ('\0');
}
