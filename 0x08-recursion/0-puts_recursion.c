#include "main.h"
/**
*_puts_recursion - prints a string followed by new line
*@s: pointer to a string
*Return: Nothing
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{

	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}


}
