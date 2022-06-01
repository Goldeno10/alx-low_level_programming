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
	char *buf = malloc(letters)

	if (!buf)
		retun (0);

	if (filename == NULL)
		return (0);


	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	if ((n = read(fd, buf, letters)) > 0)
		if ((x = write(1, buf, n)) != n)
			return (0);
	close(fd);
	return (x);
}
