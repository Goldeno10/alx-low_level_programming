#include <stdio.h>
/**
*main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(012);
	return (0);
}