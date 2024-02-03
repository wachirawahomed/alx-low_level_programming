#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a hash table
 * @size: size of the table
 * Return: A pointer to the new harsh table, or NULL if failure
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	new_ht->size = size;

	return (new_ht);
}
