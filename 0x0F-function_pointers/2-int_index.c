#include "function_pointers.h"

/**
*int_index - calls the compare the function
*@array: array of ints to comp
*@size: size of array
*@cmp: pointer to the compare function
*Return: An int
*If no element matches, return -1
*If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
