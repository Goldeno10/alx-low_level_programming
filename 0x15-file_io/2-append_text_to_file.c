#include "main.h"

/**
*append_text_to_file - Apends text to a file
*@filename: File name
*@text_content: Text content to be appended to file
*Return: 1 (success) or -1 (failure)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n, len = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len])
		len++;

	if ((fd = open(filename, O_RDWR | O_APPEND)) == -1)
		return (-1);
	if (text_content != NULL)
        {
		if ((n = write(fd, text_content, len)) != len)
			return (-1);
	}
	close(fd);
	return (1);
}

