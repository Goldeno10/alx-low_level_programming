#include "main.h"
/**
*_memset- fill fst n bytes of memory pnted to by s with the const byte b
*
*@s: pointer to a string
*@b: The constant byte to be used for replacemnt
*@n: number of bytes
*
*Return: A  pointer
*/
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
