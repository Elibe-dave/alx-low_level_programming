#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- This function reads text file (filename) and print to STDOUT
 * @filename: the actual text file this function reads
 * @letters: the actual number of letters expected  to be read
 * Return: the actual number of bytes read and printed (wt)
 *0 if it fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wt;
	ssize_t tt;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	tt = read(fd, buf, letters);
	wt = write(STDOUT_FILENO, buf, tt);

	free(buf);
	close(fd);
	return (wt);
}

