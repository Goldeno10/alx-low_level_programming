#include <stdio.h>
/**
*main - Main entry point
*@argc: Holds number if arguments
*@argv: Holds the arguments
*Return: Always 0 (Success)
*/


int main(int argc, char *argv[])
{
        (void)argv;

        printf("%d\n", (argc - 1));
        return (0);
}
