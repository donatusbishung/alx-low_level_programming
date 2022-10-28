#include "main.h"

/**
 * len - returns length of a string
 * @s: string
 * Return: length of the string
 */

int len(const char *s)
{
	int y;

	for (y = 0; s[y] != '\0'; y++)
		continue;
	return (y);
}

/**
 * binary_to_uint - converts a string of binary numbers to unsigned
 * int
 * @b: a string of 0 to 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 1;
	unsigned int j = 0;
	unsigned int strlen;
	int k;

	if (b == NULL)
		return (0);

	strlen = len(b);

	for (k = strlen - 1; k >= 0; k--)
	{
		if (b[k] != '1' && b[k] != '0')
			return (0);
		if (b[k] == '1')
			j += tmp;
		tmp *= 2;
	}
	return (j);
}
