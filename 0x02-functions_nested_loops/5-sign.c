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
		putchar(43);
		return (1);
	}
	if (n = 0)
	{
		putchar (48);
		return (0);
	}
	if (n < 0)
	{
		putchar(45);
		return (-1);
	}
}
