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
	char *str;
	unsigned int i, c, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = (_strlen(s1) + _strlen(s2) + 1);

	str = (char *) malloc(size * sizeof(char));

	if (str == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(str + i) = *(s1 + i);
	}
	for (c = 0; *(s2 + c) != '\0'; c++)
	{
		*(str + i) = *(s2 + c);
	}

	return (str);
}
