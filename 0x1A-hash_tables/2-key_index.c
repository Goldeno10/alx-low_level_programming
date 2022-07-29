#include "hash_tables.h"

/**
 *key_index - Evaluates the index of a key in the
 *hash table
 *@key: is the key
 *@size: The size of the array of the hash table
 *Return:  the index at which the key/value pair should be
 *stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2((unsigned char *)key);

	return (index % size);
}
