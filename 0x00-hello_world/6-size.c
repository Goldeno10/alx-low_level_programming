#include <stdio.h>
/**
*main - Entry point
*
*printf: print formated string on standard output
*sizeof: prints the size of various types on the computer 
*
*Return: Always 0 (Success)
*/
int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
