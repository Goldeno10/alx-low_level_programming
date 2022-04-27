#include "main.h"
/**
*_memset- fills 1st  n bytes of the memory area pointed to by s with the const byte b
*
*@s: pointer to a string
*@b: The constant byte to be used for replacemnt
*@n: number of bytes
*
*Return: Always a pointer
*/
char *_memset(char *s, char b, unsigned int n);
{
	int i;

	i = 0;
	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
