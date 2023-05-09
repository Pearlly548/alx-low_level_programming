#include "main.h"
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
	ssize_t n_In, n_Out;
	char *fptr;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}

	fptr = malloc(letters * sizeof(char));
	if (fptr == NULL)
		return (0);

	n_In = read(file, fptr, letters);	
	n_Out = write(STDOUT_FILENO, fptr, n_In);
	
	
	if (n_Out != n_In && n_Out == -1)
		return (0);

	free(fptr);
	close(file);
	return (n_In);
}
