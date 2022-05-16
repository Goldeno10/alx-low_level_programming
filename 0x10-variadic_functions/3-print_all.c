#include "variadic_functions.h"
/**
*print_all - Print all data types
*@format: Formats for input data
*Return: Nothing
*/
void print_all(const char * const format, ...)
{
	va_list inp_list;
	unsigned int i = 0, j, c = 0;
	char *s;
	const char allowed_fmt[] = "cifs";

	va_start(inp_list, format);
	while (format && format[i])
	{
		j = 0;
		while (allowed_fmt[j])
		{
			if (format[i] == allowed_fmt[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(inp_list, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(inp_list, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(inp_list, double)), c = 1;
				break;
			case 's':
				s = va_arg(inp_list, char *), c = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		} i++;
	}
	printf("\n"), va_end(inp_list);
}
