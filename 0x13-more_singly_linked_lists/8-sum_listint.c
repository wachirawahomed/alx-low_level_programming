#include "lists.h"
/**
 * sum_listint - sums all the data (n) of a listint_t linked list.
 * @head: a pointer to the head node of listint_t.
 * Return: sum of all elements, 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;

	return (sum);
}
