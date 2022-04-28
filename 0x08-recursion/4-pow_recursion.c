#include "main.h"
/**
*_pow_recusoin - returns the value of x raised to the power of y
*@x:An integer
*@y: the power
*Return: An interger
*/
int _pow_recursoin(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x , y--);
	}
	else
	{
		return (1);
	}
}
