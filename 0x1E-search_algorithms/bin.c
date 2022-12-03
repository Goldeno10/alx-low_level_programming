#include "search_algos.h"

int recusive(int *array, size_t size, int value);
/**
 *
 *
 *
 *
 */
int binary_search(int *array, size_t size, int value)
{

	if (!array || size <  1)
		return (-1);

	return (recusive(array, size, value));
	/*
	while (low < high)
	{
		/ *
		printf("Searching in array: ");
		for(; low  <= high ; low++)
		{
		       printf("%s %i", ",", array[low]);
		}
		* /
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	return (-1);
	*/
}

int recusive(int *array, size_t size, int value)
{
	size_t mid, lo, hi, i;

	lo = 0;
	hi = size;

	mid = (lo + hi) / 2;
	
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");
	if (lo > hi)
		return -1;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
	{
		mid++;
		return (recusive(array + mid, size - mid, value));
	}
	else return (recusive(array, mid, value));
}
