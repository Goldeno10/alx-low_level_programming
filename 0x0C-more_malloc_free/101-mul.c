#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two positive numbers
 * @argc: Arguments count
 * @argv: argument s
 * Return: integer
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] > 57 || argv[i][c] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}

	}
	mul = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
