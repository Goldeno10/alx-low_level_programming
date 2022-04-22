#include "main.h"
#include <stdio.h>
/**
*print_rev- print a string in reverse.
*
*@s: holds the string being manipulated.
*Return: Returns nothing.
*/
void print_rev(char *s)
{
	int c;
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	for ( c = (len -1); c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar(012);
}
