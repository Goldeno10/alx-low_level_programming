#include "main.h"
/**
*_strchr - ficd a character in memory
*
*@s: pointer to a string
*@c: character to be found
*
*Return: A  pointer or null
*/
unsigned int _strspn(char *s, char *accept);
#include "main.h"

/**
 * _strspn - Finds a char in a string
 * @s: points to the string  being checked.
 * @accept: contains the string to be matched
 * Return: return an int
 **/

unsigned int _strspn(char *s, char *accept)

{
	int i, c;
	int x = 0;
	char *s1,
	char *s2;

	s1 = s;
	s2 = accept;

	i = 0;
	while (s1[i] != '\0')
	{
		c = 0;
		while (s2[c] != '\0')
		{
			if (s2[c] == s1[i])
			{
				x++;
				break;
			}

			c++;
		}

		if (s[i] != accept[c])
		{
			break;
		}

		i++;
	}

	return (x);
}
