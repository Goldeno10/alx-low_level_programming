#include <stdio.h>
#include "main.h"

void print_alphabet(void);

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(012);
}

