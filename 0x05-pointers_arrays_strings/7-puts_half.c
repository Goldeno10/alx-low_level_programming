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

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	for (c = (len / 2); c <= len; c++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[c]);
		}
		else
		{
			_putchar(str[c - 1]);
		}
	}
	_putchar(012);
}
