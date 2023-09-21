#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		free(new);
		return (NULL);
	}
}
