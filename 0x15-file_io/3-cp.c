#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buf(char *file);
void close_file(int fd);

/**
 * create_buf - a func allocating bytes for a buffer
 * @file: name of the file whose chars are stored by the buffer
 * Return: pointer to the new buffer allocated
 */
char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_descr - a function that closes file descriptors
 * @fd: file descriptor being closed
 */
void close_descr(int fd)
{
	int s;

	s = close(fd);

	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - a function that copies the contents of a file to another file
 * @argc: number of arguments fed to the program
 * @argv: an array of pointers to the arguments
 * Return: 0 - success
 *
 * Description: incorrect argument count - exit code 97.
 * file_from does not exist or cannot be read - exit code 98.
 * file_to cannot be created or written to - exit code 99.
 * file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	r = read(file_from, buf, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (file_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(file_to, buf, r);
		if (file_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(file_from, buf, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
