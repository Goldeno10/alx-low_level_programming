#include "main.h"
/**
*swap_int - Swaps the value of two integers using pointers
*
*@a: Hold the first argument being changed
*@b: Hold second atgument
*
*Return: Return nothing
*/
void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
