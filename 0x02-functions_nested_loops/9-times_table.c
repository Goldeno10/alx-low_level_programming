#include "main.h"
/**
*times_table- prints the 9 time table
*
*Return: Reeturns nothing
*/
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c = a * b;

			if (c <= 9)
			{
				_putchar(c + '0');
				if (b < 9)
				{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b < 9)
				{
				_putchar(44);
				_putchar(32);
				}
			}
		}
	_putchar(012);
	}
}

