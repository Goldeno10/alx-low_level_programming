#include "main.h"
/**
*print_most_numbers- prints numbers 0 through  9
*
*Return: returns nothing
*/
void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		if (!((c == 2) || (c == 4)))
		{
			_putchar(c + '0');
		}
		c++;

	}
	_putchar(012);
}
