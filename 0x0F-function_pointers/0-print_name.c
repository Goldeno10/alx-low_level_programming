#include "function_pointers.h"

/**
* print_name - prints name
* @name: name to be printed
* @f: function pointer to do the printing
* Return: Nothing
* parses the name to a function pointed to
* by the function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
