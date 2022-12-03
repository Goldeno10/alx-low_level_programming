#include <elf.h>

/**
 *
 *
 *
 */

int main(int argc, char *argv)
{
	int fd;

	if (argc < 1)
	{
		dprintf("Usage: elf_header elf_filename");
		exit(98);
	}

	fd = open
