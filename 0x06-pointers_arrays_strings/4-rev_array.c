#include "main.h"
#include <stdio.h>
/**
*reverse_array- reverses an array.
*
*@a: holds the string being manipulated.
*@n: holds the number of elements in the array
*Return: Returns nothing.
*/
void reverse_array(int *a, int n)
{
	int c;
	int temp;


	for (c = 0; c < n--; c++)
	{
		temp = a[c];
		a[c] = a[n];
		a[n] = temp;
	}
}
