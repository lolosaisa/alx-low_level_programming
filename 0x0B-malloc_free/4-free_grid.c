#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - Function frees a two dimensional grid
 * @grid: the grid to be freed
 * @height: dimension of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
	{
		free(grid[l]);
	}

	free(grid);
}
