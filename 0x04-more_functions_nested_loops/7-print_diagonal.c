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
		if (n > 0)
		{
			for (b = 0; b <= n; b++)
			{
				_putchar(' ');
			}
		}
		_putchar(92);
		c++;
	}
	_putchar('\n');
}
