#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid .
 * @grid: array
 * @height: size
 * Return: alaway 0.
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
	return (0);
}
