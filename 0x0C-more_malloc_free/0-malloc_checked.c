#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - Allocates a memory using malloc
*@b: Size of memory needed
*Return: Nothing
*/
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit (98);
	}
	return (mem);
}
