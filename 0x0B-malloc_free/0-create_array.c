#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - prograam with a function that
 * creates an array of char, and innitializes it
 * with a specific char.
 * @size: integer size
 * @c: string character
 *
 * Return: A pointer to the array or Null if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int = i;
	char *su;

	if (size == Null)
		return (Null);
	su = malloc(size * sizeof(char(c)));
	if (su == Null)
		return (Null);
	for (i = 0; i < size; i++)
		su[i] = c;
}
