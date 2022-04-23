#include "main.h"
#include <stdio.h>
/**
*puts_half- print half the string.
*
*@str: holds the string being manipulated.
*Return: Returns nothing.
*/
void puts_half(char *str)
{
	int c;
	int len;
	int n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	n = len - 1;
	for (c = 0; c <= n / 2; c++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[c + (len / 2)]);
		}
		else
		{
			_putchar(str[c + ((n - 1) /2)]);
		}
	}
	_putchar(012);
}
