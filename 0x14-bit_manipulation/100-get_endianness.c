#include "main.h"

/**
 *get_endianness - checks for endianness
 *Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int b = 1;
	char *a = (char *)&b;

	if (*a)
		return (1);
	else
		return (0);
}
