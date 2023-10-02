#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(USAGE_ERROR);
	}
	int fd_src = open(argv[1], O_RDONLY);
	if (fd_src < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(FILE_READ_ERROR);
	}
   int fd_dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_dst < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	exit(FILE_WRITE_ERROR);
	}
	char buf[BUF_SIZE];

	ssize_t bytes_read;
	while ((bytes_read = read(fd_src, buf, BUF_SIZE)) > 0)
	{
	ssize_t bytes_written = write(fd_dst, buf, bytes_read);
	if (bytes_written < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
	exit(FILE_WRITE_ERROR);
	}
	}
	if (close(fd_src) < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
	exit(FILE_CLOSE_ERROR);
	}
	if (close(fd_dst) < 0)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dst);
	exit(FILE_CLOSE_ERROR);
	}
	return 0;
}
