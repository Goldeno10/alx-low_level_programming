#include "main.h"
/**
*print_rev- print a string in reverse.
*
*@s: holds the string being manipulated.
*Return: Returns nothing.
*/
void print_rev(char *s)
{
	int c;
	int i;
	int len0 = strlen(s);
	char temp;

	len = len0 - 1;
	i = 0;
	while (s{i} != '\0'}
	{
		i++
	}

	for (c = 0; c < i; c++)
	{
		temp = s{c};
		s{c} = s{len - c};
		s{len - c} = s{C};
	}
	puts(s);

}
