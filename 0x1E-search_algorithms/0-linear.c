#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the 
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);

	while (index < size)
	{	
		printf("Value checked array[%li] = [%li]\n", index, size);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
