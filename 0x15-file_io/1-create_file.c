#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, res;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	res = write(fd, text_content, _strlen(text_content));
	if (res == -1)
		return (-1);

	close(fd);
	return (1);
}
