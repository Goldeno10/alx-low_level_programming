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
char *_strchr(char *s, char c)
{
	while ( *s != '\0')
	{
		if (*s  == c)
		{
			return (s);
			break;
		}
		++s;
	}
	return (0);

}
