#include "main.h"
/**
*factorial - calculate the factorial of a given number
*@n: integer whose factorial is sorted for
*Return: An integer
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
