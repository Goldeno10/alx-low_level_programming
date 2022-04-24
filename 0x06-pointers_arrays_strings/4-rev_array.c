#include "main.h"
#include <stdio.h>
/**
*reverse_array- reverses an array.
*
*@a: holds the array being manipulated.
*@n: holds the lenght of the array.
*Return: Returns nothing.
*/
void reverse_array(int *a, int n)
{
	int c;
	int i;
	int temp[sizeof(a)];

	i = 0;
	for (c = n; c >= 0; c--)
	{
		temp[i] = a[c];
		i++;
	}
	a = temp;
}
