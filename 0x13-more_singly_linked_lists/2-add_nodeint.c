#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  function that returns the number of elements in a linked
 * @head: head of the linked list
 * @n :integer
 * Return: Always 0
 *
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	while (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
