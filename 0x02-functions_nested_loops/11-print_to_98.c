#include "main.h"
/**
*
*
*
*/
void print_to_98(int n)
{
	do
	{
		if (n < 9)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10));
			_putchar((n % 10));
		}
		_putchar(',');
		_putchar(' ');
	}
	while (n <= 98);
	{
		if (n < 9)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10));
			_putchar((n % 10));
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
