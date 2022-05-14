#include "3-calc.h"
#include <stdlib.h>
/**
*main - Main Entry point
*@argc: Number of argumments entered
*@argv: array of arguments entered
*Return: An Integer
*/

int main(int argc, char *argv[])
{
	int a ,b;
	char *c;
	int x;

	if (argc != 4)
		exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];

	x = (*get_op_func(c))(a, b);
	printf("%d\n", x);
	return (0);
}
