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

	c = 0
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
