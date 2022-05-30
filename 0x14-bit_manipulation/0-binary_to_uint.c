#include "main.h"

/**
*binary_to_unit - Converts binary to units
*@b: binary bits
*Return: unit value of binary bits
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (i = 1, num = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
