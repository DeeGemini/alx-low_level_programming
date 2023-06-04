#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the 2d array
 * @grid: 2d grid
 * @height: Height dimension of grid
 * Description: Frees the memory of grid
 *
 * Return: NULL
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
