#include "hash_tables.h"

/**
 * add_hash_node - adds a node at the beginning of
 * a hash at a given index
 *
 * @h: head of the hash linked list
 * @k: The hash key
 * @v: value to store
 * Return: head of the hash
 */
hash_node_t *add_hash_node(hash_node_t **h, const char *k, const char *v)
{
	hash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(k, tmp->k) == 0)
		{
			free(tmp->value);
			tmp->v = strdup(v);
			return (*h);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(hash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->k = strdup(k);
	tmp->v = strdup(v);
	tmp->next = *h;
	*h = tmp;

	return (*h);
}

/**
 * hash_table_set - adds a hash (key, value) to a
 * given hash table
 * @ht: pointer to the hash table
 * @key: key of the hash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (add_hash_node(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
