#include "main.h"
#include <stdlib.h>
/**
*
*
*
*
*/


char *_strdup(char *str)
{
	char *x;
	unsigned int i;
	unsigned int size;

	size = strlen(str);

	x = malloc(sizeof(str) * size);

	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			x[i] = str[i];
		}
		return (x);
	}
	else
	{
		return (NULL);
	}
	free(x);
}

