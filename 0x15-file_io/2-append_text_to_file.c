#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * @filename: the name of file
  * @text_content: the content of file
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, num_letters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
		wr = write(fd, text_content, num_letters);
		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
