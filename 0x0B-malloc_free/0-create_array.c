#include "main.h"
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars
 * @c : The character to initialize the array witht
 * @size: The size of the array.
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size  * sizeof(*array);
	if (array == NULL)
		return (NULL);

	for ( i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
