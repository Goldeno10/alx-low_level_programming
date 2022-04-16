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
		while (c < (n + 1))
		{
			_putchar(45);
                	c++;
		}
		 _putchar(012);
	}
	else
	{
		_putchar(012);
	}
}
