#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid .
 * @grid:
 * @height:
 * Return:
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
