#include "main.h"
/**
*_abs- Comutes absolute values
*
*@n: value being compared
*
*Return: Always return the absolute value
*/
int _abs(int n)
{
	if ((n > 0) || (n == 0))
	{
		return (n);
	}
	else
	{
		int b = (n * (-1));

		return (b);
	}
}
