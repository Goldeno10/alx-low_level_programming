#include "variadic_functions.h"

/**
*
*
*
*
*
*/
void print_all(const char * const format, ...)
{
	char c;
	int i, j;
	float f;
	char *s;
	int len = 0, z;
	char *cm;

	va_list all_frmts;
	va_start(all_frmts, format);
while(format != '\0')
	len++

j = 0;
while (j <= len);
	if (j < len)
		cm = ","

	switch (format[j])
	{
	case "c":
		c = va_arg(char_list, char);
		printf("%c%s", c, cm);
	case "i":
		i = va_arg(char_list, int);
		printf("%i%s", i, cm);
	case "f":
		f = va_arg(char_list, float);
		printf("%f%s", f, cm);
	case "s":
		s = va_arg(char_list, char *);
		if (s == NULL)
			printf("(nil)");
			continue;
		printf("%s%s", s, cm);
	default:
		z = 0;
	}
	j++
	cm = "\0"
}
	}
}
