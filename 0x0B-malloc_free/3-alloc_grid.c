#include "main.h"
#include <stdlib.h>
/**
*alloc_grid - create an array of 0s
*@width: the the column count:
*@height: the row count
*Return: Pointer to pointer to an int
*/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int c;

	if ((width || height) <= 0)
	{
		return (NULL);
	}
	arr = malloc(height *  sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; c < width; c++)
	{
		arr[i][c] = 0;
	}
	return (arr);
	free(arr);
}
