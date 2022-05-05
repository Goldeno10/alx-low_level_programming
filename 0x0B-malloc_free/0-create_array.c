#include <stdlib.h>
/**
*create_array - creates an array
*@size: Size of the array
*@c: The initializing charactern
*Return: A pointer to char
*/
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size == 0)
	{
		return (NULL)
	}
	x = (char *) malloc(sizeof(c) * size);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	}
	return (x);
	}
	free(x);
}
