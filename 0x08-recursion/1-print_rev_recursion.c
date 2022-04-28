#include "main.h"
/**
*_print_rev_recursion - prints a string in reverse.
*@s: pointer to the string
*Return: Nothing
*/
void _print_rev_recursion(char *s)
{
	int i:

	i = 0;
	if (*s)
	{
		_print_rev_recursion(s++);
		_putchar(*s);

	}


}
