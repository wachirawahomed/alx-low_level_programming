#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: is a double pointer to the first node in singly linked list.
 * @str: the string to be added in the new node.
 * Return: address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *newNode;
	unsigned int len;

	for (len = 0; str[len] != '\0'; len++)
		len++;

	newNode = malloc(sizeof(struct list_s));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);
	free(newNode);
}
