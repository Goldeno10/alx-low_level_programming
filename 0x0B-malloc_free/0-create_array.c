#include <stdlib.h>
/**
*create_array - creates an array
*@size: Size of the array
*@c: The initializing charactern
*Return: A pointer to char
*/
char *create_array(unsigned int size, char c);
{
	char *x = malloc(sizeof(c) * size);
	int i;

	if (size == 0)
	{
		return (NULL);
	}
	else if (size = 0)
	{
		for (i = 0; i < size; i++)
		{
			x[i] = c;
		}
		return (x);
	}
	else
	{
		return (NULL);
	}
}
