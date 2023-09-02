#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 * @head: pointer to head node of the list.
 * @index: is the index of the nth node, starting at 0.
 * Return: the nth node, NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
