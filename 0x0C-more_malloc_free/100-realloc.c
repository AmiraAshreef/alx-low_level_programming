#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a blockory block using malloc and free.
 * @ptr: A pointer to the blockory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new blockory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated blockory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	char *ptr_copy, *filler;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		block = malloc(new_size);

		if (block == NULL)
			return (NULL);

		return (block);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	block = malloc(sizeof(*ptr_copy) * new_size);

	if (block == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = block;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;

	free(ptr);
	return (block);
}

