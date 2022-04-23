#include "main.h"
/**
*_strcat- concatinate two strings.
*
*@dest: holds the first string pointer
*@src: holds the secind string string pointer.
*Return: Returns pointer.
*/
char *_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	len_scr = 0;
	while (src[len_scr] != '\0')
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}

	dest[len_dest + len_src] = '\0';
	return (dest);
}
