#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  function to add node  in begining of  linkedlist
 * @head: head of the linked list
 * @n :integer to store in the list
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new1;

	new1 = malloc(sizeof(listint_t));
	if (new1 == NULL)
		return (NULL);

	new1->n = n;
	new1->next = *head;

	*head = new1;

	return (new1);
}
