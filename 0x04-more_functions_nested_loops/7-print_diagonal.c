#include "main.h"
/**
*print_diagonal- print dashes n time
*@n: holds the value being counted
*Return: returns nothing
*/
void print_diagonal(int n)
{
	int b;
	int c;

	c = 0;
	while (c < n)
	{
		for (b = 0; b <= n; b++)
		{
			_putchar('0');
		}
		_putchar('\\');
		c++;
	}
	_putchar('\n');
}
