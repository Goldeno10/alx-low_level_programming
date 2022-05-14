#include "3-calc.h"
#include <stdlib.h>
/**
*op_add - Addition op
*Return: An int
*/
int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
*op_sub - Subtraction op
*Return: An int
*/
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
*op_mul - Multiplication op
*Return: An int
*/
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
*op_div - Division op
*Return: An int
*/
int op_div(int a, int b)
{
	if (b)
	{
		if(b != 0)
		{
			return ((a) / (b));
		}
	}
	exit(100);
}
/*
*op_mod - Modulus op
*Return: An int
*/
int op_mod(int a, int b)
{
	if (b)
	{
		return ((a) % (b));
	}
	exit(100);
}
