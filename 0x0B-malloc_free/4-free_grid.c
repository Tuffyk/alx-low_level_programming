#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: pointer to the 2 dimensional grid
 * @height: number of rows
 *
 * Return: void
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
