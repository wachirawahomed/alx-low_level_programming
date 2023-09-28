#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			/* Print the list before the loop starts */
			while (head != hare)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			/* Print the loop starting node */
			printf("[%p] %d\n", (void *)hare, hare->n);
			return (hare);
		}
	}
	return (NULL);
}

