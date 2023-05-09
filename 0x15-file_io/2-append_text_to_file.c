#include "main.h"

/**
 * append_text_to_file - adds text at the end of the file
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, x, insert;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	insert = write(file, text_content, strlen(text_content));
	if (insert < 0)
		return (-1);

	x = close(file);
	if (x < 0)
		return (-1);

	return (1);
}
