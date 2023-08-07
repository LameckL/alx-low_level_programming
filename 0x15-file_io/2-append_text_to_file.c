#include "main.h"

/**
 * append_text_to_file - a func that appends text at the end of a file
 * @filename: file name pointer
 * @text_content: the string text to add to the end of the file
 * Return: 1 - success,
 * -1 failure - filename is NULL,
 * file does not exist, no write permissions
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, n, lenn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenn = 0; text_content[lenn];)
			lenn++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	n = write(m, text_content, lenn);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}
