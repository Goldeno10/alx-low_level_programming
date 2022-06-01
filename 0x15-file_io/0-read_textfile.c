#include "main.h"
/**
*read_textfile - reads a text file and prints it
* to the POSIX standard output.
*@filename: Filename
*@letters:letters is the number of letters
* it should read and print
*Return: the actual number of letters it
* could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, x = 0;
	char buf[BUFSIZ];

	if (filename == NULL)
                return (0);


	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	if ((n = read(fd, buf, letters)) > 0)
		if ((x = write(1, buf, n)) != n)
			return (0);
	return (x);
}
