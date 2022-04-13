#include "main.h"
/**
*
*
*
*/
void print_to_98(int n)
{
	int a = n / 10;
	int b = n % 10;
	int c;

	for (c = n; c <= 98; c++);
	{
		if (n < 9)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar(a + '0');
			_putchar(b + '0');
		}
		_putchar(',');
		_putchar(' ');

	}
}
