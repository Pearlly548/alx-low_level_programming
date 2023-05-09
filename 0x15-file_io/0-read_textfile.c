#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout
 * @filename: name of  pointer
 * @letters: The number of letters to read and write
 *
 * Return: If the function fails or filename is NULL - 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (-1);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(file);
		return (-1);
	}

	n_read = read(file, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(file);
		return (-1);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(file);
		return (-1);
	}

		free(buffer);
		close(file);
	return (n_read);
}
