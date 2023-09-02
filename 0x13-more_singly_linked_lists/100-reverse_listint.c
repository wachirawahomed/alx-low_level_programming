#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: double pointer to head node of listint_t.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	while (!*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}

	return (prev);
}
