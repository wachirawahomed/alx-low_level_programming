#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array
 * of integers using jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	prev = 0;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[jump] < value && jump < (int)size)
	{
		prev = jump;
		jump += sqrt(size);
		if (jump >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, jump);

	for (i = prev; i <= jump && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
