#include "main.h"
/**
*_strcpy- print half the string.
*
*@dest: holds the buffer pointer
*@src: holds the cours string pointer.
*Return: Returns pointer.
*/
char *_strcpy(char *dest, char *src)
{
	int c;
	int len;

	len = 0;
	while (src[len] <= '\0')
	{
		len++;
	}

	for (c = 0; c <= len; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
