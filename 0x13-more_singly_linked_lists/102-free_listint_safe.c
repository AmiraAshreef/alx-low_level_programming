#include "lists.h"
#include <stdlib.h>

/**
 *find_listint  -  finds a loop in a linked list
 *
 * @head: linked list to search
 *
 * Return: address of node ,or  NULL
 */

listint_t *find_listint(listint_t *head)
{

	listint_t *ptr, *end;

	if (head == NULL)
	{
	return (NULL);
	}

	end = head->next;

	while (end != NULL)
	{
		if (end == end->next)
		{
			return (end);
		}

		ptr = head;

		while (ptr != end)
		{
			if (ptr == end->next)
			{
			return (end->next);
			}

			ptr = ptr->next;
		}
		end = end->next;
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a list, even if it has a loop
 *
 * @h: head of list
 *
 * Return: NO of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	if (h == NULL || *h == NULL)
	{
	return (0);
	}
	listint_t *loop_node;

	*loop_node = *find_listint(*h);

	listint_t *next = (*h)->next;
	size_t len = 0;

	while (*h != loop_node || loop_node != NULL)
	{
	len++;
	if (*h == loop_node)
	{
	break;
	}
	free(*h);
	*h = next;
	next = next->next;
	}

	if (loop_node != NULL)
	{
	free(loop_node);
	}

	*h = NULL;

	return (len);
}
