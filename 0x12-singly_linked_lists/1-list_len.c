#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in a linked list.
 * @h: pointer to a node
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
