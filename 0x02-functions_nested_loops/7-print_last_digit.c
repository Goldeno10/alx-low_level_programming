#include "main.h"
/**
*print_last_digit- return the last digit of a number
*
*@n: Value being checked
*Return: Always return the last digit of n
*/
int print_last_digit(int n)
{
	int b = (n % 10);

	if (b >= 0)
	{
		_putchar(b + '0');
		return (b);
	}
	else
	{
		int c = (b * (-1));
		_putchar((c + '0');
		return (c);
	}
}
