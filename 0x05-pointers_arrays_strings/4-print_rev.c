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
	int len = strlen(s) - 1;
	char temp ;

	for (c = 0; c < len/2; c++)
	{
		temp = s{c};
		s{c} = s{len - c};
		s{len - c} = s{C};
	}
	puts(s);

}
