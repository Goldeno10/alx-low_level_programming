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
	char temp;

	i = 0;
	while (s{i} != '\0')
	{
		i++
	}

	for (c = 0; c < i; c++)
	{
		temp = s{c};
		s{c} = s{i - c};
		s{i - c} = s{C};
	}
	puts(s);

}
