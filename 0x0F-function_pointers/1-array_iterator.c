#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array - pointer to an array.
 * @size: the size of the array.
 * @action: pointer to the function to be use.
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
