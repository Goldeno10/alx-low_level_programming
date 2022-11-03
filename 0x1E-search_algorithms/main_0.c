#include <stdio.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int array[10] = {
		8, 1, 42, 3, 4, 42, 6, 7, -1, 9
	};

	printf("Found at index: %d\n", linear_search(array, 10, 3));
	return (0);
}
