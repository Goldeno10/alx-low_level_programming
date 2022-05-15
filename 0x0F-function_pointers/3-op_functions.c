#include <stdio.h>
#include <stdlib.h>

/**
*op_add - Addition op
*@a: first integer
*@b: second integer
*Return: An int
*/

int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
*op_sub - Subtraction op
*@a: first integer
*@b: second integer
*Return: An int
*/

int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
*op_mul - Multiplication op
*@a: first integer
*@b: second integer
*Return: An int
*/
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
*op_div - Division op
*@a: first integer
*@b: second integer
*Return: An int
*/

int op_div(int a, int b)
{
	if (b)
	{
		return ((a) / (b));
	}
	printf("Error\n");
	exit(100);
}

/**
*op_mod - Modulus op
*@a: first integer
*@b: second integer
*Return: An int
*/
int op_mod(int a, int b)
{
	if (b)
	{
		return ((a) % (b));
	}
	printf("Error\n");
	exit(100);
}
