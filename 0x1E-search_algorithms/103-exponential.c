#include "search_algos.h"
#include <stdio.h>

/**
* binary_search - Searches for a value in a sorted array of
* integers using binary search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index of the value in the array, or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

/**
* exponential_search - Searches for a value in a
* sorted array of integers using exponential search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index of the value in the array, or -1 if not found
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t lower_bound, upper_bound, sub_array_size;
	int *sub_array;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				bound, array[bound]);
		bound *= 2;
	}

	lower_bound = bound / 2;
	upper_bound = (bound < size) ? bound : (size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n",
			lower_bound, upper_bound);

	sub_array = array + lower_bound;
	sub_array_size = (bound < size) ? (bound - lower_bound)
		: (size - lower_bound);

	return (binary_search(sub_array, sub_array_size, value));
}
