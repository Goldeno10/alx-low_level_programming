#include "main.h"
/**
*alloc_grid - create an array of 0s
*@width: the the column count:
*@height: the row count
*Return: Pointer to pointer to an int
*/
int **alloc_grid(int width, int height)
{
	int *arr:
	int i;
	int c;

	if ((width || height) <= 0)
	{
		return (NULL);
	}
	arr = malloc(width * height * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		for (c = 0; c < height; c++)
		{
			arr[i][c] = 0;
		}
	}
	return (arr);
}
