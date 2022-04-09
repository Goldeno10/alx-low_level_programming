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
	int x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar("%x\n",x);
	}
	return (0);
}
