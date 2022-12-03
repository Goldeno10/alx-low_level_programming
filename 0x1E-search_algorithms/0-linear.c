#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 *	Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: Index of the first occurence of value or -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array || size < 1)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%li] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
