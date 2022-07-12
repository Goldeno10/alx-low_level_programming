#include "main.h"
/**
 * _strpbrk - matches any character specified
 * @s: pointer to the string being checked
 * @accept:points to the character being check for
 *Return: A ointer to string founf
 **/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}

			i++;
		}

		s++;
	}
	return (0);

}
