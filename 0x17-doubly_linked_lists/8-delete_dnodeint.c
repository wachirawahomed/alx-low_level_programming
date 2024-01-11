#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at given index of a list
 * @head: pointer to head of the list
 * @index: index to delete from, starting from 0
 * Return: 1 on success or -1 on failure
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cut = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	cut = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(cut);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	while ((index != 0) && (cut->next != NULL))
	{
		index -= 1;
		cut = cut->next;
	}
	if (index == 0)
	{
		cut->prev->next = cut->next;
		if (cut->next != NULL)
			cut->next->prev = cut->prev;
		free(cut);
		return (1);
	}
	return (-1);
}
