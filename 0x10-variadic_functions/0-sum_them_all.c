#include "variadic_functions.h"
/**
*sum_them_all - sum of all its parameters.
*@n: number of arguments
*Return: Sum of Ints
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list nums;

	if (n == 0)
		return (0);


	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, unsigned int);

	va_end(nums);
	return (sum);
}
