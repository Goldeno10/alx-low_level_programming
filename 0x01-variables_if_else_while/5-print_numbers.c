#include <stdio.h>
/**
*main- Entry point
*
*putchar: print characters to stdout
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d",x);
	}
	putchar(012);
	return (0);
}
