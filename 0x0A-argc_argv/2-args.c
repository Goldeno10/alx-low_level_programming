#include <stdio.h>
#include "main.h"
/**
*main- Main entry point
*@argc: Holds number if arguments
*@argv: Holds the arguments
*Return: Always 0 (Success)
*/


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[]);
	}
	return (0);
}
