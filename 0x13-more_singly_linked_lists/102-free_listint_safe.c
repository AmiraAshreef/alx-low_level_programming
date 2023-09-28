#include "lists.h"
#include <stdlib.h>

/**
 * find_listint -  finds a loop in a linked list
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
	listint_t *next, *loop;
	size_t len;
	int i = 1;

	if (h == NULL || *h == NULL)
		return (0);

	i = find_listint(*h);
	for (len = 0; (*h != i || i) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loop && i)
		{
			if (loop == loop->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			i = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
