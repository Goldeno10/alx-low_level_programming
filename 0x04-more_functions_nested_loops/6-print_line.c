#include "main.h"
/**
*print_line- print dashes n time
*@n: hols the value being counted
*Return: returns nothing
*/
void print_line(int n)
{
	int c;

	c = 0;
	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar(95);
		}
		 _putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
