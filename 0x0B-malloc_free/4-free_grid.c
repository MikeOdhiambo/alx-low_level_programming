#include <stdlib.h>

#include "main.h"
/**
 * free_grid - Frees a 2D grid
 * @grid: Grid memory to be freed
 * @height: Height of grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
