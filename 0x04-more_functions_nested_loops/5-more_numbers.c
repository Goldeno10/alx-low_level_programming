#include "main.h"
/**
*more_numbers- prints numbers 0 through  9
*
*Return: returns nothing
*/
void more_numbers(void)
{
	int a;
	int b;
	int c;
	int i;

	i = 0;
	c = 0;
	while (i < 10)
	{
		while (c < 14)
		{
			if (c < 10)
			{
				b = c;
			}
			else
			{
				a = c / 10;
				b = c % 10;
				_putchar(a + '0');
			}
			_putchar(b + '0');
			c++;
		}
		i++;
	}
	_putchar(012);
}
