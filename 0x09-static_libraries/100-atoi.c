#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: 0
 */

int _atoi(char *s)
{
	unsigned int number = 0, a = 0, d = 0, f = 1, g = 1, i;

	while (*(s + number) != '\0')
	{
		if (a > 0 && (*(s + number) < '0' || *(s + number) > '9'))
			break;

		if (*(s + number) == '-')
			f *= -1;

		if ((*(s + number) >= '0') && (*(s + number) <= '9'))
		{
			if (a > 0)
				g *= 10;
			a++;
		}
		number++;
	}

	for (i = number - a; i < number; i++)
	{
		d = d + ((*(s + i) - 48) * g);
		g /= 10;
	}
	return (d * f);
}
