#include <stdio.h>
/**
*main - Entry point
*
*printf: print formated string on standard output
*sizeof: prints the size of various types on the computer 
*
*Return: Always 0 (Success)
*/
int main (void)
{
	printf("Size of char: %s",sizeof(char));
	printf("Size of an int: %s",sizeof(int));
	printf("Size of a long int: %s",sizeof(long int));
	printf("Size of long long int: %s",sizeof(long long int));
	printf("Size of a float: %s",sizeof(float));
	return (0);
}
