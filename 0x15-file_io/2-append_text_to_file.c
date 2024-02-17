#include "main.h"

/**
 * append_text_to_file - Entry point
 * Description: Function that appends text at the end of a file
 * @filename: name of file
 * @text_content: content to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlength, wr;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (nlength = 0; text_content[nlength];)
			nlength++;

	fd = open(filename, O_APPEND | O_WRONLY);
	wr = write(fd, text_content, nlength);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
