#include <stdio.h>
#include "main.h"

/**
 * create_file - a func that creates a file
 * @filename: pointer to the name of the file being create
 * @text_content: pointer to the string writing the file
 * Return: 1 i succes, else if the function fails -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n, lenn;

	lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(fd, text_content, lenn);

	if (fd == -1 || n == -1)
		return (-1);

	close(fd);

	return (1);
}
