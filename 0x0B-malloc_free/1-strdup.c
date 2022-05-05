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
*_strcpy - Copies  a string
*@dest: new string
*@src: source string
*Return: Pointer to a String
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
*_strdup - duplicates a string to a new location
*@str: pointer to the string to be duplicated
*Return: Apointer to a string
*/
char *_strdup(char *str)
{
	char *x;
	unsigned int size;

	size = _strlen(str) + 1;

	x = malloc(sizeof(char) * len);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		_strcpy(x, str);
		return (x);
	}
	else
	{
		return (NULL);
	}
	free(x);
}

