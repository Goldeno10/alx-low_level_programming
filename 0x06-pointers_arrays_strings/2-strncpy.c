#include "main.h"
/**
*_strncpy- copy n number two strings.
*
*@dest: holds the first string pointer
*@src: holds the secind string string pointer.
*@n: Holds number of byte to concated
*Return: Returns pointer.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len_dest;
	int len_src;

	len_dest = 0;
	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	len_src = 0;
	while (src[len_src] != '\0' && len_src < n)
	{
		dest[len_src] = src[len_src];
		len_src++;
	}
	for (; len_src <n; len_src++)
		dest[len_src] = '\0';

	return (dest);
}
