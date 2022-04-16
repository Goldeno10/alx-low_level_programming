#include "main.h"
/**
*print_numbers- prints numbers 0 through  9
*
*Return: returns nothing
*/
void print_numbers(void)
{
	int a;
	int b;
	int c;
	int i;

	i = 0;
	while (i < 10)
	{
		while (c < 14)
		{
			if (c < 10)
			{
				a = c;
				_putchar(a);
			}
			else
			{
				b = c;
				_putchar(b);
			}
			c++;
		}
		i++;
	}
	_putchar(012);
}
