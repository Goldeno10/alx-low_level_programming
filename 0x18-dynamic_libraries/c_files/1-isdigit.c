#include "main.h"
/**
*_isdigit- checks if a character is digit
*@c: holds the character being checked
*Return: 1 if true and 0 if false
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
