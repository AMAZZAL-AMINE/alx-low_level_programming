#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: text to write to file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_count, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write_count = write(fd, text_content, i);
		if (write_count == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
