#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

<<<<<<< HEAD
	if (a > b && (b > c || b = c))
	{
		largest = a;
	}
	else if (b > a && (a > c || a = c))
=======
	if (a > b && (b > c || b == c))
	{
		largest = a;
	}
	else if (b > a && (a > c || a == c))
>>>>>>> 3923dce7a6cab9feddd49953e0e7ec5925107121
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
