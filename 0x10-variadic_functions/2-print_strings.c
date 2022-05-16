#include "variadic_functions.h"
/**
*print_strings - prints strings, followed by a new line.
*@seperator: seperator for the inputs.
*@n: Number of inputs
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *chk_str;

	if (n)
	{
		va_start(str, n);
		for (i = 0; i < n; i++)
		{
			chk_str = (va_arg(str, char *) != NULL) ? va_arg(str, char *) : "(nill)";
			(separator && i < n - 1) ? printf("%s%s", chk_str, separator) : printf("%s", chk_str);
		}
	}
	printf("\n");
	va_end(str);
}
