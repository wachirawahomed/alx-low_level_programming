#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *crrt;
	unsigned int n;

	crrt = head;
	n = 0;
	while (crrt != NULL)
	{
		if (n == index)
			return (crrt);
		crrt = crrt->next;
		n++;
	}
	return (NULL);
}
