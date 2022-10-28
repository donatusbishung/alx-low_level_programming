#include "main.h"

/**
 * rPow - Raises to a specified number
 * @a: nuber to be raised
 * @b: power to be raised to
 * Return: a**b
 */

unsigned int rPow(int a, unsigned int b)
{
	unsigned int y;
	unsigned int v = 1;

	for (y = 0; y < b; Y++)
		v *= a;
	return (v);
}

/**
 * binary_to_uint - converts a string of binary numbers to unsigned
 * int
 * @b: pointer to the string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int tmp = 0, rValue = 0;

	if (b == NULL)
		return (tmp);
	else
	{
		unsigned int loop, len = strlen(b);

		len--;
		for (loop = 0; loop <= len; loop++)
		{
			char c = b[loop];

			if (c != '0' && c != '1')
				return (tmp);
			else
			{
				rValue += (((unsigned int)c - 48) * rPow(2, (len - loop)));
			}
		}
		return (rValue);
	}
}
