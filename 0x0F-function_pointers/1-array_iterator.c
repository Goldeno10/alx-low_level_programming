#include "function_pointers.h"

/**
*array_iterator - iterate thru an array and aplly a func
*@array: Array
*@size: size of array
*@action: function pointer
*Return: Nothing
*Desctription:executes a function given as a parameter
* on each element of an array.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array && size && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
