#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - that searches for an integer.
 * @array: pointer to an array.
 * @size: number of elements in the array array.
 * @cmp: pointer to the function to be used to compare values.
 * Return: the index of the first element on success, else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
