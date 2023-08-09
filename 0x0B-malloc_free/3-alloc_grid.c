#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: heigh of array
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(width * sizeof(int));
	if (grid == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
	{
		grid[w] = malloc(height * sizeof(int));
		if (grid[w] == NULL)
		{
			return (NULL);
		}
	}

	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
			grid[w][h] = 0;
	}

	return (grid);

	for (w = 0; w < width; w++)
	{
		free(grid[w]);
	}

	free(grid);
}
