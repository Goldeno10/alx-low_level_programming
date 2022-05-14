#include "function_pointers.h"

/**
*print_name - prints name
*@name: name to be printed
*@f: function pointer to do the printing
*Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if(name && f)
		f(name);
}
