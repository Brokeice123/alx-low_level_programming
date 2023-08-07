#include "main.h"

/**
 *append_text_to_file - a function that appends text at the end of a file.
 *@filename: The file name
 *@text_content: The text to append to the file.
 *
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	bytes = write(fd, text_content, len);
	if (bytes == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
