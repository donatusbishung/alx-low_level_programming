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
	char *start, *end, tmp;
	int sen = 0, b;

	while (*(s + sen) != '\0')
		sen++;
	start = s;
	end = s;

	for (b = 0; b < sen - 1; b++)
		end++;
	for (b = 0; b < sen / 2; b++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		start++;
		end--;
	}
}
