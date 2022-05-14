#include "function_pointers.h"
/**
*int_index - calls the compare the function
*@array: array of ints to comp
*@size: size of array
*@cmp: pointer to the compare function
*Return: An int
*Description: If no element matches, return -1
*If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		i = 0;
		while (i < size)
		{
			c = cmp(array[i]);
			if (c == 1)
			{
				return (i);
				break;
			}
			i++;
		}
	}
	return (-1);
}
