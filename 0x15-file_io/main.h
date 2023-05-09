#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/*
 * main.h - Header file containing function prototypes
 * for working with i/o project files
 *
 *
 * read_textfile - Read up to @p letters bytes of text from a file.
 * @param filename: The name of the file to read.
 * @param letters: The maximum number of bytes to read.
 * @return: The number of bytes read from the file, or -1 on error.
 *
 *
 * create_file - Create a new file with the specified name and text content.
 *
 * @param filename: The name of the file to create.
 * @param text_content: The text content to write to the file.
 * @return: 0 on success, -1 on error.
 *
 *
 * append_text_to_file - Appends the specified text content to an existing file.
 *
 * @param filename: The name of the file to append to.
 * @param text_content: The text content to append.
 * @return: 0 on success, -1 on error.
 */

int append_text_to_file(const char *filename, char *text_content);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

#endif

