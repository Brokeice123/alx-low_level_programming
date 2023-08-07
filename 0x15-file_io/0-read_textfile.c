#include "main.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output.
 *@filename: The file name
 *@letters: The number of letters to be read and printed
 *
 *Return: The number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	char *buffer = (char *)malloc(letters + 1);
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	bytes_read = read(fp, buffer, letters);

	buffer[bytes_read] = '\0';
	if (bytes_read == -1)
	{
		close(fp);
		return (0);
	}

	write(STDOUT_FILENO, buffer, bytes_read);

	close(fp);

	return (bytes_read);
}
