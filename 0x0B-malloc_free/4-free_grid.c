#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - fuction that frees 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
