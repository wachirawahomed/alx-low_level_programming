#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: double pointer to head node of listint_t
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *crnt, *nxt;

	if (!head || !*head)
		return (-1);
	crnt = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(crnt);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		crnt = crnt->next;
		if (crnt == NULL)
			return (-1);
	}
	nxt = crnt->next;
	crnt->next = nxt->next;
	free(nxt);
	return (1);
}
