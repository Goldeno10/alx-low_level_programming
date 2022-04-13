#include "main.h"
/**
*jack_bauer- prints time jack bauer movie esq
*
*@a: holds and count the hour
*@b: holdes and count the minute
*
*Return: Returns nothing
*/
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar(012);

		}
	}
}
