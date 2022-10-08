#include "main.h"
#include <stdlib.h>

/**
 * array_range - program creates an array of integers
 * @min: first integer
 * @max: second integer
 *
 * Return: pointer to newly allocated memory or Null if fails
 */

int *array_range(int min, int max)
{
	int i, k;
	int *a;

	if (min > max)
		return (NULL);
	k = (max - min) + 1;
	a = malloc(sizeof(*a) * k);
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; min++)
	{
		a[i] = min;
	}
	return (a);
}
