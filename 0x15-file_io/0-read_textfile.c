#include "main.h"

/**
 * read_textfile - Entry point
 * Description: Function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: filename
 * @letters: number of letters to be read and printed
 * Return: acutal numbers of letters printed, else 0 upon write faliure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	wr = write(STDOUT_FILENO, buf, rd);
	if (wr == -1)
		return (0);
	free(buf);

	close(fd);

	return (wr);
}
