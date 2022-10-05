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

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);
	}

	for (h = 0; h < height; h++)
	{
		for (k = 0; k < width; k++)
		{
			ptr[h][k] = 0;
		}
	}
	return (ptr);
}
