#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located,
 *         or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *curr;

	if (list == NULL)
		return (NULL);

	while (prev->express && prev->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->express->index, prev->express->n);
		prev = prev->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, prev->express->index);

	curr = prev;
	while (curr && curr->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				curr->index, curr->n);
		curr = curr->next;
	}

	if (curr && curr->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				curr->index, curr->n);
		return (curr);
	}

	return (NULL);
}
