#include "main.h"
#define BUF 1024
#define PERM 0664

void _close(int fd_1, int fd_2);

/**
*main - Main entry point
*@argc: Number of arguments
*@argv:The arguments
*Return: An integer
*/
int main(int argc, char *argv[])
{
	int from_fd, to_fd, n_1, n_2;
	char *buf = malloc(BUF + 1);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from_fd = open(argv[1], O_RDONLY);
	n_1 = read(from_fd, buf, BUF);
	if (from_fd == -1 || n_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to_fd = open(argv[2], O_RDWR);
	if (to_fd == -1)
	{
		to_fd = creat(argv[2], PERM);
		if (to_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	n_2 = write(to_fd, buf, n_1);
	if (n_2 != n_1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	_close(from_fd, to_fd);
	return (0);
}
/**
*_close - closes opened files
*@fd_1: file descriptor for file 1
*@fd_2: file descriptor for file 2
*Return: Nothing
*/
void _close(int fd_1, int fd_2)
{
	int c_1, c_2;

	c_1 = close(fd_1);
	if (c_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_1);
		exit(100);
	}

	c_2 = close(fd_2);
	if (c_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_2);
		exit(100);
	}
}
