#include "main.h"
#include <stdio.h>
/**
*puts2- print every other string.
*
*@str: holds the string being manipulated.
*Return: Returns nothing.
*/
void puts2(char *str)
{
	int c;
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (c = 0; c <= (len - 1); c += 2)
	{
		_putchar(s[c]);
	}
	_putchar(012);
}
