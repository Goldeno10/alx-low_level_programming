#include "main.h"

/**
 * _strstr - finds 1st occurrence of the substring needle in the string haystack
 * @haystack: string to be examined
 * @needle: searched in haystack
 * Return: zero or s1
 **/

char  *_strstr(char *haystack, char *needle)
{
	char *s1;
	char *s2;

	while (*haystack != '\0')
	{
		s1 = haystack;
		s2 = needle;

		while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
		{
			haystack++;
			s2++;
		}
		if (*s2 == '\0')
			return (s1);
		haystack = s1 + 1;
	}
	return (0);
}
