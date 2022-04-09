#include <stdio.h>
/**
*main - Entry point
*
*putchar: used to print characters  to the standard output
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int x;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar(012);
	return (0);
}
