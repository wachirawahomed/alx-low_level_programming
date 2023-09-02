#include "lists.h"
#include <stddef.h>

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pionter to head node.
 * Return: number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

