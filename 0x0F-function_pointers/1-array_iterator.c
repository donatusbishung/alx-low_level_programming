#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function that executes a func given as a
 * parameter on each element of array
 *
 * @array: array to be executed
 * @size: size of array
 * @action: pointer
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || action == NULL)
		return;
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
