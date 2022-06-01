#include "main.h"
/**
*read_textfile - reads a text file and prints it
*@filename: Filename
*@letters:letters is the number of lettter
*Return: the actual number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t n, x = 0;
	char *buf = malloc(letters);

	if (!buf)
	{
		free(buf);
		return (0);
	}
	if (filename == NULL)
	{
		free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	n = read(fd, buf, letters);
	if (n > 0)
	{
		x = write(1, buf, n);
		if (x != n)
		{
			free(buf);
			return (0);
		}
	}
	close(fd);
	free(buf);
	return (x);
}
