#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	ht->array = array;
	ht->size = size;

	return (ht);
}
