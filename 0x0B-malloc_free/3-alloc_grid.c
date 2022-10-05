#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - program with function that returns a pointer
 * to a 2 D array of integers.
 * @width: width of integer
 * @height: height of integer
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int h, k, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * (width * height));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (h = 0; h < width; h++)
	{
		for (k = 0; k < height; k++)
		{
			if (k == width)
			_putchar('\n');
		}
	}
	return (ptr);
}
