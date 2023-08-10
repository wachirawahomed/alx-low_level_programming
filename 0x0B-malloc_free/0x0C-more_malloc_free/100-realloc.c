#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to previous memory
 * @old_size: size of previous memory
 * @new_size: size of new memory
 * Return: pointer to reallocated memory or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nmem;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
			if (ptr == NULL)
				return (NULL);
			return (ptr);
	}
	nmem = malloc(new_size * sizeof(char));
	if (nmem == NULL)
	return (NULL);
