#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function to print  list & numbers of element
 * @h: A pointer to the head of the list_t list
 *
 * Return:  number of nodes
 *
 */


size_t print_listint(const listint_t *h)
{

	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
