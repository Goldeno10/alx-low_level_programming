#include "main.h"
#include <stdlib.h>
/**
*_strlen - Evaluate the lenght of string
*@s: Pointerto the string
*Return: integer
*/
unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != 0)
	{
		len++;
	}
	return (len);
}


/**
*string_nconcat - Concatenates string in n byte
*@s1: String 1
*@s2: String 2
*@n: Number of bytes
*Return: Pointer to a string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int len_s1 = _strlen(s1);
	unsigned int len_s2 = _strlen(s2);
	unsigned int _n = (n >= len_s2) ? len_s2 : n;
	char *str = malloc((sizeof(char) * len_s1) + _n);

	if (str == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; i <= len_s1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < _n; i++)
	{
		str[len_s1 + i] = s2[i];
	}

	str[len_s1 + i] = '\0';

	return (str);
}
