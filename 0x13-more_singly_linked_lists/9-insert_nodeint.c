#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

		listint_t *new_node, *tmp = *head;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	while (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
	}

	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
