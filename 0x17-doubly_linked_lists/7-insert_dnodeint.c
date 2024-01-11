#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at given index in the list
 * @h: pointer to head of the list
 * @idx: index to add at, starting from 0
 * @n: value of new node
 * Return: new node or null
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
	{
		tmp->next = new;
		new->prev = tmp;
		new->next = NULL;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	new->next->prev = new;
	return (new);
}
