#include <stdio.h>
#include "main.h"

/**
 * _strspn- function that gets the length of a prefix substring
 * @s: string
 * @accept:
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, bool;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (a);
}
