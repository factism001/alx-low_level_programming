#include "main.h"

/**
  * create_file - creates a file
  * @filename: the name of file
  * @text_content: text content of file
  * Return: if sucess 1, -1 if fail
  */
int create_file(const char *filename, char *text_content)
{
	int fd, num_letters, wr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	
	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	
	wr = write(fd, text_content, num_letters);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
