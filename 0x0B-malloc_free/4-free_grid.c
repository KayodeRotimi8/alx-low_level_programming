#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by alloc_grid function
 *
 * @grid: 2 dimensional grid to free
 * @height: height of grid
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}

		free(grid);
	}
}
