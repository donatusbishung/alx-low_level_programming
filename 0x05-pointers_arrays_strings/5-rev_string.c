#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: char
 *
 * Returns: 0
 */

void rev_string(char *s)
{
	char *start, *end, temp;
	int sen = 0, b;

	while (*s(s + sen) != '\0')
		sen++;
	start = s;
	end = s;

	for (c = 0; c < sen - 1; c++)
		end++;
	for (c = 0; c < sen / 2; c++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
