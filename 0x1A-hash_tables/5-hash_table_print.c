#include "hash_tables.h"

/**
 *
 *
 *
 *
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i, size = 1024;
	hash_node_t *node;

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
	printf("{");
	for (i = 0; i < size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			while (node)
			{
				printf("'%s': '%s'", (char *)node->key, (char *)node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
