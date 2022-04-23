#include "main.h"
#include <stdio.h>
/**
*prints_array- print half the string.
*
*@a: holds array variablle
*@n: holds size of array.
*Return: Returns nothing.
*/
void print_array(int *a, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		printf("%d", a[c]);
		if (c < (n - 1))
		{
		printf(", ");
		}
		c++;
	}
	printf("\n");
}
