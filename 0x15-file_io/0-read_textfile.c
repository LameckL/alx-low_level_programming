#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a func that reads text file then prints to POSIX std/out
 * @filename: file being red
 * @letters: no. of letters to read
 * Return: n - the number of bytes read and print
 *        0 - function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t n;
	ssize_t p;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	p = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, p);

	free(buf);
	close(fd);
	return (n);
}
