#include "main.h"
#include <stdio.h>
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
	char temp;

	len = 0;
	while (src[len] <= '\0')
	{
		len++;
	}

	for (c = 0; c <= len; c++)
	{
		*dest[c] = scr[c];
	return (dest);
}
