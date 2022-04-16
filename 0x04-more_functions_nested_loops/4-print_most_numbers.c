#include "main.h"
/**
*print_most_numbers- prints numbers 0 through  9
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 || c != 52)
		{
			_putchar(c);
		}

	}
	_putchar(012);
}
