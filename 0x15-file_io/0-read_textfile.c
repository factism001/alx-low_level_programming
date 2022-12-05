#include "main.h"

/**
  * read_textfile - reads a text file and prints it to standard output.
  * @filename: the name of the file to read
  * @letters: tye number of letters to print
  * Return: the number of letters it could read and print or 0 if fail
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wr);
}
