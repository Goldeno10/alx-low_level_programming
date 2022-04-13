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

			_putchar(c + '0');
			_putchar(44);
			_putchar(20);
		}
	_putchar(012);
	}
}

