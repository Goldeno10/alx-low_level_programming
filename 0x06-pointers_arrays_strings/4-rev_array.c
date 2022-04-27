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

<<<<<<< HEAD
	i = 0;
	for (c = n; c >= 0; c--)
	{
		temp[i] = a[c];
		i++;
=======

	for (c = 0; c < n--; c++)
	{
		temp = a[c];
		a[c] = a[n];
		a[n] = temp;
>>>>>>> 1253217e5a8ff4af6c21f4f0a003931e9b48fe14
	}
	a = temp;
}
