#include "main.h"
/**
*_strcat - concatinate two strings.
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
	len_src = 0;
	while (src[len_src] != '\0')
	{
		dest[len_dest + len_src] = src[len_src];
		len_src++;
	}
	dest[len_dest + len_src] = '\0';
	return (dest);
}
#include "main.h"
#include <stdlib.h>
/**
*_strlen - evaluate the lenght of a string
*@s: Pointer to the string
*Return: An inteteger(length of string)
*/
int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
*str_concat - Joind two strings together
*@s1: string one
*@s2: string two
*Return: Pointer to a string
*/
char *str_concat(char *s1, char *s2)
{

	int t_len = _strlen(s1) + _strlen(s2) + 1;
	int i;

	unsigned int len_s1, len_s2;
	char *str;

	if (s1 == NULL)
		s = "";
	if (s2 == NULL)
		s2 = "";
	_strcat(s1, s2);
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	t_len =  (len_s1 + len_s2 + 1);
	str = malloc(sizeof(char) * t_len);
	if (str == NULL)
	{
		return (NULL);
	}

	 _strcat(s1, s2);
	for (i = 0; i < t_len; i++)
	{
		str[i] = s1[i];
	}
	str[i] = '\n';
	return (str);
}
