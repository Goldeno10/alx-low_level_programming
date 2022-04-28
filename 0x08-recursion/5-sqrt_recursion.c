#include "main.h"
/**
*_eval - determines the sqrt
*@i: An integer variable
*@n: the interger whose sqrt is being sorted
*Return: Sqrt
*/
int eval(int i, int n)
{

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (eval(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (-1);

	return (-1);
}

/**
 *_sqrt_recursion - Calculate sqrt
 *@n: integer whos sqr is being sorted
 *Return: An integer
*/

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (eval(i, n));
	}
}
