#include "main.h"
/**
*print_alphabet_x10- prints aphabets  "A" to "Z" in lower case
*
*Return: void, returns nothing
*/
void print_alphabet_x10(void)
{
	int x;
	int count = 0;

	while (count < 10)
	{
        	for (x = 'a'; x <= 'z'; x++)
        	{
                	_putchar(x);
        	}
		count++;
        	_putchar(012);
	}
}

