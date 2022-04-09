#include <stdio.h>
/**
*
*main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int y;
	
	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 0; y++)
	{
		putchar(y);
	}
	putchar(012);
	return (0);
}
