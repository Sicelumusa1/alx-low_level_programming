#include "main.h"

/**
 * read_textfile - reads text file and prints it to stdout
 * @filename: pointer to file path name
 * @letters: No. of letters to be read and printed
 * Return: No. of letter read and printed, 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, print, x, read_count;
	char buffer[1024];

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY, 0755);

	if (file < 0)
	{
		return (0);
	}

	read_count = read(file, buffer, letters);
	if (read_count < 0)
	{
		return (0);
	}

	print = write(STDOUT_FILENO, buffer, read_count);
	if (print < 0)
	{
		return (0);
	}

	x = close(file);
	if (x < 0)
	{
		return (0);
	}

	return (print);
}
