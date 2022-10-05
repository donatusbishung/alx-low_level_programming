#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees the allocated memory of a 2 D grid
 * @grid: memory to be freed
 * @height: height
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	}
}
