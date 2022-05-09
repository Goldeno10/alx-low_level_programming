#include "main.h"
#include <stdlib>
/**
*malloc_checked - Allocates a memory using malloc
*@b: Size of memory needed
*Return: Nothing
*/
void *malloc_checked(unsigned int b)
{
	unsigned int *mem = malloc(sizeof(*mem) * b);
	if (mem == NULL)
		return (NULL);

	return (mem);
}
