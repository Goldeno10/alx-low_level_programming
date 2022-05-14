#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
*opt_ ops: struct array of opt_ops
*/
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
	{NULL, NULL}
    };

/**
*get_op_func - selects the correct func to perform the op
*@s: Pointer to string
*Return: A function pointer
*/
int (*get_op_func(char *s))(int, int)
{
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
			break;
		}
		i++;
	}
	exit(99);
}
