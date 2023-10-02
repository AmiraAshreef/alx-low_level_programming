#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/

int main(int argc, char *argv[])
{
	int main(int argc, char *argv[])
{
int f-org, f-copy;
int z1 = 1024, n = 0;
char buffer[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp f-org f-copy\n"), exit(97);
f-org = open(argv[1], O_RDONLY);
if (f-org == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
f-copy = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (f-copy == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(f-org), exit(99);
}
while (z == 1024)
{
	z = read(f-org, buffer, 1024);
	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n = write(f-copy, buffer, z);
	if (n < z)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(f-org) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f-org), exit(100);

if (close(f-copy) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f-copy), exit(100);

return (0);
}
