#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	struct listint_s *free_node;

	free_node = head;

	if (free_node != NULL)
	{
	head = head->next;
	free(free_node->next);
	free(free_node);
	}
}
