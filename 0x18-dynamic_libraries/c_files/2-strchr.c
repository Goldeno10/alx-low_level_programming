#include "main.h"
/**
*_strchr - ficd a character in memory
*
*@s: pointer to a string
*@c: character to be found
*
*Return: A  pointer or null
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s  == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);

	}
	return (0);

}
