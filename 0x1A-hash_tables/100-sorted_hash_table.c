#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table = malloc(sizeof(shash_table_t));

	if (shash_table == NULL)
		return (NULL);

	shash_table->size = size;
	shash_table->array = calloc(size, sizeof(shash_node_t *));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key. It can't be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else
	{
		temp = ht->shead;
		while (temp != NULL && strcmp(temp->key, key) < 0)
		{
			temp = temp->snext;
		}

		if (temp == NULL)
		{
			new_node->sprev = ht->stail;
			ht->stail->snext = new_node;
			ht->stail = new_node;
		}
		else
		{
			new_node->sprev = temp->sprev;
			new_node->snext = temp;
			if (temp->sprev != NULL)
				temp->sprev->snext = new_node;
			else
				ht->shead = new_node;
			temp->sprev = new_node;
		}
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 * Return: The value associated with the key, or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	temp = ht->shead;

	while (temp != NULL && strcmp(temp->key, key) < 0)
	{
		temp = temp->snext;
	}

	if (temp != NULL && strcmp(temp->key, key) == 0)
		return (temp->value);

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (temp = ht->shead; temp != NULL; temp = temp->snext)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->snext != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (ht == NULL)
		return;

	printf("{");
	for (temp = ht->stail; temp != NULL; temp = temp->sprev)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		if (temp->sprev != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;

	if (ht == NULL)
		return;

	temp = ht->shead;

	while (temp != NULL)
	{
		next = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}

	free(ht->array);
	free(ht);
}
