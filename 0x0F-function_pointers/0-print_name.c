#include "function_pointers.h"

/**
*print_name - prints name
*@name: name to be printed
*@f: function pointer to do the printing
*Return: Nothing
*prints the name using function pointer
*only when name and print function is provided
*/

void print_name(char *name, void (*f)(char *))
{
	if(name && f)
	{
		f(name);
	}
}
