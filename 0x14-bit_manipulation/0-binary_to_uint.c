#include "main.h"

/**
*binary_to_unit - Converts binary to units
*@b: binary bits
*Return: unit value of binary bits
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, x;
	int len;

	if (!b)
		return (0);

	while (b[len])
		len++;
	len--;
	for (x = 1, num = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			x *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			num += x;
			x *= 2;
			continue;
		}
		return (0);
	}
	return (num);
}
