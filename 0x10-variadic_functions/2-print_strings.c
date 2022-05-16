#include "variadic_functions.h"
/**
*print_strings - prints strings, followed by a new line.
*@separator: seperator for the inputs.
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
			chk_str = va_arg(str, char *);

			if (chk_str)
				printf("%s", chk_str);
			else
				printf("(nil)");

			if (i < n - 1)
				if (separator != NULL)
					printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
