#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index from  list.
 * @head: A pointer to the address of the
 *         head   list.
 * @index: The index of the node to be deleted - .
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del = *head;
	unsigned int i;

	if (del == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (del->next == NULL)
			return (-1);

		del = del->next;
	}

	tmp = del->next;
	del->next = tmp->next;
	free(tmp);
	return (1);
}
