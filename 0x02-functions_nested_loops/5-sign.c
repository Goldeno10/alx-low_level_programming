#include <stdio.h>
#include "main.h"
/**
*print_sign- Checks if a number is greater, equal or less than zero
*
*@n: holds the value being compared
*
*Return: 1 to n > 0, 0 for n = 0 and -1 for n < 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
