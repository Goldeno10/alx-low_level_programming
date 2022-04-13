#include "main.h"
/**
*_isalpha - Checks if a character is an alphabet
*
*@c : Holde the character being coimared
*Return : i if true and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
