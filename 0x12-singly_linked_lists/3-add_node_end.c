#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: a double pointer to a node in a linked list.
 * @str: string to be add in new tail node.
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;
	char *dupStr;

	if (str == NULL)
		return (NULL);

	dupStr = strdup(str);
	if (dupStr == NULL)
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = dupStr;
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}

	return (*head);
	free(newNode);
}
