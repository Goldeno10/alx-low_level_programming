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
	char *i;
	char temp;

	len = 0;
	for (i = s; *i != '\0'; i++)
	{
		len++;
	}

	for (c = 0; c < len; c++)
	{
		temp = *(s + c);
		*(s + c) = *(s  + (len - c));
		*(s + (len - c)) = *(s + c);
	}
	puts(s);

}
