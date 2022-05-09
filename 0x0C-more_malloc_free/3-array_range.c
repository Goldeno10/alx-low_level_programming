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
	range = max - min;
	arr = malloc(sizeof(int) * range + 1);
	if (arr == NULL)
		return (NULL);

	r = 0;
	i = min;
	while (r <= range)
	{
		arr[r] = i;
		r++;
		i++;
	}
	return (arr);
}
