#include "main.h"

/**
*base_convert - Converts unsigned ints to variouse base
*@num: Number to be converted
*@base: Base to convert to
*Return: A Char pointer
*/

char *base_convert(u_int num, int base)
{
	static char base_char[] = "0123456789abcdef";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = base_char[num % base];
		num /= base;
	}while(num != 0);

	return (ptr);
}

/**
*base_CONVERT - Converts unsigned ints to variouse bases
*@num: Number to be converted
*@base: Base to convert to
*Return: A Char pointer
*/

char *base_CONVERT(u_int num, int base)
{
	static char base_char[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do
	{
		*--ptr = base_char[num % base];
		num /= base;
	}while(num != 0);

	return (ptr);
}
