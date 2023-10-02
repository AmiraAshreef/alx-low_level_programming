#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return:1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int i;

	if (filename == NULL)
	{
	return (-1);
	}


	if (text_content != NULL)
	{
	return (-1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	if (text_content != NULL)
	{
	int fp  = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp  < 0)
	{
	return (-1);
	}
	}
	write(file, text_content,i);
	close(fd);

	return (1);
}
