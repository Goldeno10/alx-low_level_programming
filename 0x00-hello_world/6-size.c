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
	printf("Size of char: %d",sizeof(char));
	printf("Size of an int: %d",sizeof(int));
	printf("Size of a long int: %d",sizeof(long int));
	printf("Size of long long int: %d",sizeof(long long int));
	printf("Size of a float: %d",sizeof(float));
	return (0);
}
