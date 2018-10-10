#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d array of integers
 * @width: width
 * @height: height
 *
 * Return: pointer to array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)(malloc(height * sizeof(int *)));

	if (grid == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		grid[h] = (int *)(malloc(width * sizeof(int)));

		if (grid[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(grid[w]);
			free(grid);
			return (NULL);
		}

		for (w = 0; w < width; w++)
			grid[h][w] = 0;
	}

	return (grid);
}
