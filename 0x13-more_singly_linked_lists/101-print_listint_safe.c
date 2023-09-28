#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * find_loop - finds a loop in a  list
 *
 * @head: linked list for search
 *
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *ptr, *i;

	if (head == NULL)
		return (NULL);

	for (i = head->next; i != NULL; i = i->next)
	{
		if (i == i->next)
			return (i);
		for (ptr = head; ptr != i; ptr = ptr->next)
			if (ptr == i->next)
				return (i->next);
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a linked listA
 *
 *
 * @head: head of list to print
 *
 * Return: No of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int i;
	listint_t *Lnode;

	Lnode = find_loop((listint_t *) head);

	for (len = 0, i = 1; (head != Lnode || i) && head != NULL; len++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		if (head == Lnode)
			i = 0;
		head = head->next;
	}

	if (Lnode != NULL)
		printf("-> [%p] %d\n", (void *) head, head->n);
	return (len);
}
