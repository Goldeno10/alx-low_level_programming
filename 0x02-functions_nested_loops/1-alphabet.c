#include "main.h"
/**
*print_alphabet: prints aphabets  "A" to "Z" in lower case
*
*/
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar(012);
}

