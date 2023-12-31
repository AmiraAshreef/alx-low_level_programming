#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int i, j, all;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, all = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, all++)
			;
		all++;
	}
	all++;

	a = malloc(all * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*a = av[i][j];
			a++;
		}
		*a = '\n';
		a++;
	}

	return (retp);
}
