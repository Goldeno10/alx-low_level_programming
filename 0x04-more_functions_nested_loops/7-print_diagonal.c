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

	if (n > 0)
	{
		for (b = 0; b < n; b++)
		{
			for (c = 0; c < n; c++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
