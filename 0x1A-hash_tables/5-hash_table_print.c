#include "hash_tables.h"

/**
 *hash_table_print - prints a hash table.
 *@ht: Pointer to hash table
 *Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size = 1023;
	hash_node_t *node;
	unsigned long int last_index;

	if (!ht)
	{
		printf("{}");
		return;
	}
	if (ht->array == NULL)
	{
		printf("{}");
		return;
	}
	last_index = get_last_index(ht->array, ht->size);
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			while (node)
			{
				if (i < last_index)
					printf("'%s': '%s', ", (char *)node->key, (char *)node->value);
				if (i == last_index)
					printf("'%s': '%s'", (char *)node->key, (char *)node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
/**
 *get_last_index - Gets the index of last key/value pair
 *@arr: hash table array
 *@size: Hash table size
 *Return: The last index
 */

unsigned long int get_last_index(hash_node_t **arr, unsigned long int size)
{
	unsigned long int last_index = 0, i = 0;

	if (!arr)
		return (0);
	while (i < size)
	{
		if (arr[i])
			last_index = i;
		i++;
	}
	return (last_index);
}
