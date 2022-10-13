#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer used to compare values
 * @array: array to be searched
 *
 * Return: index of the first element for which cmp doesn't return
 * 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
