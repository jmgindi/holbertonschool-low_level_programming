#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 * @grid: array created with alloc_grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
