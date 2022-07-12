#include "main.h"
/**
*_islower - check if  a character is an alphabet 
*@c: holds tha parameter being compared
*Return: 1 if true and  0 if false
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
