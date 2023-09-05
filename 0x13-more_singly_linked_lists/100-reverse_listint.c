#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: double pointer to head node of listint_t.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *new = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	prev = *head;
	new = reverse_listint(&(*head)->next);
	prev->next->next = prev;
	prev->next = NULL;

	return (new);
}
