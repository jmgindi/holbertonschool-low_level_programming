#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees previously initialized grid
 * @grid: pointer to the grid
 * @height: height in rows
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
