#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  function to add node  in begining of  linkedlist
 * @head: head of the linked list
 * @n :integer to store in the list
 * Return: pointer to current position in inkedlist
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
