#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a grid of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to grid, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int w_i, h_i;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h_i = 0; h_i < height; h_i++)
	{
		grid[h_i] = malloc(sizeof(int) * width);

		if (grid[h_i] == NULL)
		{
			for (w_i = 0; w_i < h; w_i++)
				free(grid[w_i]);
			free(grid);
			return (NULL);
		}

		for (w_i = 0; w_i < width; w_i++)
			grid[h_i][w_i] = 0;
	}

	return (grid);
}
