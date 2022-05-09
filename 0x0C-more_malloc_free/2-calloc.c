#include "main.h"
#include <stdlib.h>
/**
*_calloc - Allocate memory to an array
*@nmemb: Memory size of array elements
*@size: Number of array elements
*Return: Pointer to an array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *arr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (nmemb * size); i++)
		arr[i] = 0;

	return (arr);
}
