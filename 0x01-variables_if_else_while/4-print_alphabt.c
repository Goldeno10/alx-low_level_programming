#include <stdio.h>
/**
*main- Entry point
*
*putchar: used to print characters to standard output
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 145  || x != 161)
		{
			putchar(x);
		}
	}
	putchar(012);
	return (0);
}
