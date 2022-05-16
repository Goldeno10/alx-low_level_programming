#include "variadic_functions.h"
/**
*
*
*
*
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	int i;

	if (seperator)
	{
		for (i = 0; i < n; i = va_arg(nums, unsigned int)
			printf("%d%s ", i, seperator);
	}



}
