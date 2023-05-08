#include "main.h"

/**
 * create_file - creates a file by system call
 * @filename: file to create
 * @text_content: string to write in the file created
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file, x, insert;

	if (filename == NULL)
	{
		return (-1);
	}

	file =  open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	insert = write(file, text_content, strlen(text_content));

	if (insert < 0)
	{
		close(file);
		return (-1);
	}

	x = close(file);
	if (x < 0)
	{
		return (-1);
	}

	return (1);
}
