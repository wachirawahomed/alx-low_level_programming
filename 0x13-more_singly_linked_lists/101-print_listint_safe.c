#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head;
	const listint_t *hare = head;
	size_t count = 0;
	int loop_detected = 0;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise  = tortoise->next;
		hare = hare->next->next;
		count++;

		if (tortoise  == hare)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		while (head != tortoise)
		{
			head = head->next;
			tortoise = tortoise->next;
			count++;
			printf("[%p] %d\n", (void *)head, head->n);
		}
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
	}
	else
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}

return (count);
}
