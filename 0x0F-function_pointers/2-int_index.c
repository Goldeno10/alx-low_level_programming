#include "function_pointers.h"
/**
*int_index - calls the compare the function
*@array: array of ints to comp
*@size: size of array
*@comp: pointer to the compare function
*Return: An int
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, c;
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		i = 0;
		while (i <= size)
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
