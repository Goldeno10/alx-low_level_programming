#include "main.h"
#define PERM 0664
#define BUF 1024
/**
*
*
*
*
*/
int main(int argc,char *argv[])
{
	int from_fd, to_fd, n;
	char buf[BUF];

	if (argc != 3)
	{
		dprintf(2,"Usage: file_from file_to");
		exit(97);
	}

	if ((from_fd = open(argv[1], O_RDONLY)) == -1)
	{
		dprintf(2," Error: Can't read from file %s", argv[1]);
		exit(99);
	}

	if ((to_fd = creat(argv[2], PERM)) == -1)
	{
		dprintf(2,"Error: Can't write to %s", argv[2]);
		exit(99);
	}
	if ((to_fd = open(argv[2], O_RDWR)) == -1)
	{
		dprintf(2," Error: Can't read from file %s", argv[2]);
		exit(99);
	}


	while ((n = read(from_fd, buf, BUF)) > 0)
	{
		if ((write(to_fd, buf, n)) != n)
		{
			dprintf(2,"Error: Can't write to %s", argv[2]);
			exit(99);
		}
	}
	if ((close(to_fd)) == -1)
	{
		dprintf(2,"Error: Can't close fd %i", to_fd);
		exit(100);
	}
	if ((close(from_fd)) == -1)
	{
		dprintf(2,"Error: Can't close fd %i", from_fd);
		exit(100);
	}
	return (1);
}
