#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min integers in array.
 * @max: max integers in aarry.
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int len = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}
