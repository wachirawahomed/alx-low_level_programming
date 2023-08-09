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
	int **grd, n, x;

	if (width < 1 || height < 1)
		return (NULL);
	grd = malloc(sizeof(int *) * height);
	if (grd == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		grd[n] = malloc(sizeof(int) * width);
		if (grd[n] == NULL)
		{
			while (--n >= 0)
				free(grd[n]);
			free(grd);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (x = 0; x < width; x++)
			grd[n][x] = 0;
	}
	return (grd);
}
