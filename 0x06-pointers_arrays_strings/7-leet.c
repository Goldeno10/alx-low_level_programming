#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *n)
{
	int i;
	int c;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (c = 0; c < 10; c++)
		{
			if (n[i] == str1[c])
			{
				n[i] = str2[c];
			}
		}
	}
	return (n);
}
