#include "main.h"
#include <stdio.h>
/**
*puts2- print every other string.
*
*@str: holds the string being manipulated.
*Return: Returns nothing.
*/
void print_rev(char *s)
{
	int c;
	int i;
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (s[i])
	{
        	for (c = 0; c <= (len - 1); c += 2)
		{
			_putchar(s[c]);
		}
		i += 2;
	}
	_putchar(012);
}
