#include "main.h"

/**
 * create_file - Entry point
 * Description: Function that creates a file
 * @filename: name of file to be created
 * @text_content: content writed in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nletters, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	wr = write(fd, text_content, nletters);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);
	return (1);
}
