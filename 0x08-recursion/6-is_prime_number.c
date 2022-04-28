#include "main.h"

/**
 *eval - Evaluates a Number
 *@num: Inputed Integer
 *@c: An Integer
 *Return: return 1 or 0
 */

int eval(int num, int c)
{
	if (c == num - 1)
	{
		return (1);
	}

	else if (num % c == 0)
	{
		return (0);
	}

	if (num % c != 0)
	{
		return (eval(num, c + 1));
	}

	return (0);
	}

/**
 *is_prime_number - evaluate prime or not
 *@num: number
 *Return: return 1 for prime - return 0 otherwise
 */

int is_prime_number(int num)
{
	int c;

	c = 2;

	if (num < 2)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	return (eval(num, c));
}
