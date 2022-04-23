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
i	nt c;

	c = 0;
	while (c < n)
	{
		_putchar(a[c] + '0');
		if (c < (n - 1))
		{
		_putchar(',');
		}
		c++;
	}
	_putchar(012);
}
