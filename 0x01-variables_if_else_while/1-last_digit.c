#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*if: logic to check last digits compared to 5
*
*Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int b = n % 10;
	if (b > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n,b);
	}
	if (b < 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n,b);
	}
	if (n == 0)
	{
	printf("Last digit of %d is %d and is zero", n,b);
	}
	return (0);
}
