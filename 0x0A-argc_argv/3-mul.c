#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int i, num  = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num  *= atoi(argv[i]);
		}
		printf("%d\n", num);
	}
	return (0);
}
