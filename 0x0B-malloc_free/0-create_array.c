#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,initializes it with a specific char
 * @size: the number of chars.
 * @c: the array
 * Return: a pointer to the array, or NULL is it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int s;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	for (s = 0; s < size; s++)
		array[s] = c;

	return (array);
	free(array);
}
