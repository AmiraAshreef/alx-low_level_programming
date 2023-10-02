#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int orgin_file, copy_file;
	int z  = 1024, n = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp orgin_file copy_file\n"), exit(97);
	orgin_file = open(argv[1], O_RDONLY);
	if (orgin_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	copy_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);
	if (copy_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(orgin_file), exit(99);
	}
	while (z == 1024)
	{
		z = read(orgin_file, buffer, 1024);
		if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
		n = write(copy_file, buffer, z);
		if (n < z)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(orgin_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", orgin_file), exit(100);

	if (close(copy_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", copy_file), exit(100);

	return (0);
}
