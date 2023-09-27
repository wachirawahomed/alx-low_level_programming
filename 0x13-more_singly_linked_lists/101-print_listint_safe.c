#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *crrt = head;
	size_t count = 0;

	while (crrt)
	{
		printf("[%p] %d\n", (void *)crrt, crrt->n);
		count++;
		if (crrt <= crrt->next)
		{
			printf("-> [%p] %d\n", (void *)crrt->next, crrt->next->n);
			break;
		}
		crrt = crrt->next;
	}

	return (count);
}
