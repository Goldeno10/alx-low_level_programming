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
	char temp;


	for (c = 0; c < n / 2; c++)
	{
		temp = a[c];
		a[c] = a[n - c];
		a[n - c] = temp;
	}
}
