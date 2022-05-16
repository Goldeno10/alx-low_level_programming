#include "variadic_functions.h"
/**
*print_numbers- rint inputed numbers with a seperator
*@seperator: seperates the numbers
*@n: nubee of digits
*Retirn: Nothing
*/
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		(seperator && i < n - 1) ? printf("%d%s", va_arg(nums, unsigned int), seperator) : printf("%d", va_arg(nums, unsigned int));

	va_end(nums);

	putchar('\n');
}
