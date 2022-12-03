#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - check the code .
 *
 * @ac: Arguments counter
 * @av: Arguments array
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	ssize_t n;
	size_t size;
	char *file;
	int fd1, fd2;

	if (ac != 3)
	{
		printf("Usage: %s filename size_to_read\n", av[0]);
		exit(1);
	}
	fd1 = open("main_0.c", O_RDONLY);
	if (fd1 == -1)
	{
		printf("Can't open file.\n");
		return (1);
	}
	file = av[1];
	if (strcmp(file, "NULL") == 0)
		file = NULL;
	size = atoi(av[2]);
	n = read_textfile(av[1], size);
	printf("\n(printed chars: %li)\n", n);
	fd2 = open("0-read_textfile.c", O_RDONLY);
	if (fd2 == -1)
	{
		printf("Can't open file.\n");
		return (1);
	}
	if (fd2 != fd1 + 1)
	{
		printf("Stream was not closed !\n");
		return (1);
	}
	return (0);
}
