#include "main.h"
#include <stdlib.h>
/**
*array_range - creates an array of integers
*@min: Minimum value
*@max: Maximun value
*Return: pointer to an integer array
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, range, r;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(arr) * max);
	if (arr == NULL)
		return (NULL);

	range = max - min;
	r = 0;
	while (r <= range)
	{
		for (i = min; i <= max; i++)
		{
			arr[r] = i;
		}
		r++;
	}
	return (arr);
}
