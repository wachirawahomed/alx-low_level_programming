#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * advanced_binary_recursive - Searches recursively. 
 * @array: Pointer to the first element of the array to search in
 * @low: The starting index.
 * @high: The ending index.
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int advanced_binary_recursive(int *array, int low, int high, int value)
{
	int i, mid;

	if (low > high)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
		return (advanced_binary_recursive(array, low, mid, value));
	}
	else if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	else
		return (advanced_binary_recursive(array, low, mid - 1, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: Must return -1,If value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
