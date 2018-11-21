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
	//declare vars
	int x;

	//check for constraints 
	if (grid == NULL || height == 0)
		return;

	//free elements in rows 1 by 1, then loop to next row
	for (x = 0; x < height; x++)
		free(grid[x]);

	//free height array
	free(grid);
}
