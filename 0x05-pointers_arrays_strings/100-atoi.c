#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: 0
 */

int _atoi(char *s)
{
	unsigned int number = 0, size = 0, oi = 0, pn = 1, m = 1, i;

	while (*(s + number) != '\0')
	{
		if (size > 0 && (*(s + number) < '0' || *(s + number) > '9'))
			break;

		if (*(s + number) == '-')
			pn *= -1;

		if ((*(s + number) >= '0') && (*(s + number) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		number++;
	}

	for (i = number - size; i < number; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
