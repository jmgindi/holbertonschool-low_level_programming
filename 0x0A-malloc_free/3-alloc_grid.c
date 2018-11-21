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

	//init variables
	int w_i, h_i;
	int **grid;

	//check for constraints
	if (width <= 0 || height <= 0)
		return (NULL);

	//allocate memory for height of grid and check
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	//initialize height to arrays of size width, check for NULL
	for (h_i = 0; h_i < height; h_i++)
	{
		//allocate memory per row
		grid[h_i] = malloc(sizeof(int) * width);

		//free memory and return null if failure
		if (grid[h_i] == NULL)
		{
			for (w_i = 0; w_i < h; w_i++)
				free(grid[w_i]);
			free(grid);
			return (NULL);
		}

		//initialize elements l-r to 0, then loop again
		for (w_i = 0; w_i < width; w_i++)
			grid[h_i][w_i] = 0;
	}
	//return grid
	return (grid);
}
