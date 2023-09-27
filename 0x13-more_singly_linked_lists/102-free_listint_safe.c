#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: pointer to a pointer of the head of the list
 *
 * Return: the number of nodes that were freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current)
	{
		count++;
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			*h = NULL;
			return (count);
		}

		free(temp);
	}
	*h = NULL;
	return (count);
}
