#include <stdio.h>
/**
*main - Entry point
*
*putchar: print characters to the standard out
*
*Return: Always 0 (Success)
*/
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
	x = tolower(x);
	putchar(x);
	}
	return (0)
}
