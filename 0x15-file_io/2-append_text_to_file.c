#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename:  the name of the file
 * @text_content: content file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	if (text_content[i] != '\0')
	{
		i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	write(fd, text_content, i);

	return (1);
}
