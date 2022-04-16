#include "main.h"
/**
*print_line- print dashes n time
*@n: hols the value being counted
*Return: returns nothing
*/
void print_diagonal_line(int n)
{
	int b;
	int c;

	c = 0;
	while ( c < n)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('0');
		}
		c++;
	}
	_putchar('\n');
}
