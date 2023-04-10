#include "main.h"
#include <stdlib.h>

/*
 * read_textfile - a function that reads a text
 * file and prints it to the POSIX standard output.
 * filename: the function reads this file
 * letters: the actual number of letters
 * the function reads (variable)
 * Return: it returns the actual number of bytes it reads
 * and prints when the function runs
 * if the function fails or filename is NULL
 * it returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t tt;
ssize_t wt;

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
