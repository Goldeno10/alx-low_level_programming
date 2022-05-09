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
	unsigned long mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(isdigit(argv[1]) && isdigit(argv[2])))
	{
		printf("Error\n");
		exit(98);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
