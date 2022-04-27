#include "main.h"
/**
*_memcpy - fills memory with copied pointer
*
*@dest: pointer to a string
*@src: Pointer to  source string
*@n: number of bytes
*
*Return: A  pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src +i);
		i++;
	}
	return (dest);
}
