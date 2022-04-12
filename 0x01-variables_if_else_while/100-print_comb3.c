#include <stdio.h>
/**
*main - Entry point 
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	int y ;

	for (x = 48; x <= 59; x++)
	{
		for (y = 48; y <= 59; y++)
		{
			if (x != y )
			{
				putchar(x);
				putchar(y);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(012);
}

