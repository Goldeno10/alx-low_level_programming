#include "main.h"
/**
*_len - find the lenght of a string
*@s: ointer to a string
*Return: an int
*/
int _len(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
/**
*is_palindrome - find a palindrome
*@s: ointer to a string
*Return: an int
*/

int is_palindrome(char *s)
{
	if (_len(s) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
