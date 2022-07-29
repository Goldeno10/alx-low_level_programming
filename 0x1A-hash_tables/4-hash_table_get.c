#include "hash_tables.h"

/**
 *hash_table_get -  retrieves a value associated with
 *a key.
 *@ht: pointer to the hash table
 *@key: Key to value to retrieve
 *Return: key Value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];

	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
