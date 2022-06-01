#include "main.h"
#define PERM 0600
/**
*create_file - creates a file and write to it
*@filename: File Name
*@text_content: Text content
*Return: return 1 (success) or -1 (failiure)
*/
int create_file(const char *filename, char *text_content)
{
	int fd, n, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;

	if ((fd = creat(filename, PERM)) == -1)
		return (-1);
	if ((n = write(fd, text_content, len)) != len)
		return (-1);
	close(fd);
	return (1);
}
