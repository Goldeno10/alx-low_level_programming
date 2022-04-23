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

	for (c = 0; c != '\0'; ++c)
	{
		dest[c] = src[c];
	}
	dest[c] = '\0';
	return (dest);
}
