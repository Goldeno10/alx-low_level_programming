#include "main.h"
#include <stdio.h>
/**
*rev_string- reverses astring.
*
*@s: holds the string being manipulated.
*Return: Returns nothing.
*/
void rev_string(char *s)
{
	int c;
	int len;
	char temp;

	len = 0;
	while (s[len])
	{
		len++;
	}

	for (c = 0; c < len / 2; c++)
	{
		temp = s[c];
		s[c] = *(s + (len - 1));
		*(s + (len - 1)) = temp;

		*(s + (len - 1))++;
		s[c]++;
	}
}
