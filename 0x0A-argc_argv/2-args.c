#include <stdio.h>
#include "main.h"
/**
*main - Main entry point
*@argc: Holds number if arguments
*@argv: Holds the arguments
*Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	printf ("%s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
