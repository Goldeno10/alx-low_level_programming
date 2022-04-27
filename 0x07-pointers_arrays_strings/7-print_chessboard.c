#include "main.h"
/**
 * print_chessboard - print a chessboard
 * @a: ointer to ad 2d array of chars
 *Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int c;

	i = 0;
	while (i < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[i][c]);
			c++;
		}
		_putchar(012);
		i++;
	}

}
