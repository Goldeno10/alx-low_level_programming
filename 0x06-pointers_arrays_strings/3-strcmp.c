#include "main.h"
/**
*_strcmp- concatinate two strings.
*
*@s1: holds the first string pointer
*@s2: holds the secind string string pointer.
*Return: Returns an int.
*/
int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int ans;
	int i = 0;
	int c = 0;


	while (s1[i] != '\0')
	{
		len_s1 += s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		len_s2 += s2[c];
		c++;
	}
	ans = len_s1 - len_s2;
	return (ans);
}
