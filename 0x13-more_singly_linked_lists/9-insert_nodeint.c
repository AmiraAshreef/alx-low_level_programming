#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to list
 *
 * @head: A pointer to the address of the
 *        head of the  list.
 * @idx: The index of the  list where the new
 *       node should be added
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         alse - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *fake = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	while (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (idx == 0)
	{
		new_node->next = fake;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (fake == NULL || fake->next == NULL)
			return (NULL);

		fake = fake->next;
	}

	new_node->next = fake->next;
	fake->next = new_node;

	return (new_node);
}
