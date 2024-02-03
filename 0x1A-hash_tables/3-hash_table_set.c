#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * update_existing_node - Updates the value of an existing node.
 * @node: The existing node to update.
 * @value: The new value to set.
 * Return: 1 on success, 0 on failure.
 */
int update_existing_node(hash_node_t *node, const char *value)
{
	free(node->value);
	node->value = strdup(value);
	return (node->value != NULL);
}

/**
 * create_new_node - Creates a new node with the given key and value.
 * @key: The key for the new node.
 * @value: The value for the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */
hash_node_t *create_new_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node_to_list - Adds a new node to the linked list at the index
 * @ht: The hash table.
 * @new_node: The new node to add.
 * @index: The index where the node should be added.
 */
void add_node_to_list(hash_table_t *ht,
		hash_node_t *new_node, unsigned long int index)
{
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. Key cannot be an empty string.
 * @value: The value associated with the key. Value must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (update_existing_node(temp, value));

		temp = temp->next;
	}

	new_node = create_new_node(key, value);
	if (new_node == NULL)
		return (0);

	add_node_to_list(ht, new_node, index);
	return (1);
}
