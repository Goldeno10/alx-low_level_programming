#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - multiplies two positive numbers
 * @argc: Arguments count
 * @argv: arguments vector
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!(isdigit(argv[1]) || isdigit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a *b;
	printf("%d\n", mul);
	return (0);
}
