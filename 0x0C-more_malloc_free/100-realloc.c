#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old Memory size
 * @new_size: new Memory size
 * Return: A pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *copy, *relloc;
	unsigned int i;

	if (ptr != NULL)
		copy = ptr;
	else
	{
		 return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		 free(ptr);
		return (0);
	}

	relloc = malloc(new_size);
	if (relloc == NULL)
		return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(relloc + i) = copy[i];
	}
	free(ptr);
return (relloc);
}
